%{
    #define _GNU_SOURCE

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    int yylex();
    void yyerror(char*);

    int count = 0;

    struct simb{
        int address;
        int type;   // 1 = int ; 2 = string ; ...
    } TS[256];

    #define address(x) TS[x].address
    #define type(x) TS[x].type

%}

%union{
    int n;
    char c;
    char* s;
    char* ass;  // código assembly
    struct exp{ char* ass; int type; } expressao;   // expressao com o tipo
}

%token LER ESCREVER INT STR VAR TINT TSTR
%type <n> NUM
%type <c> VAR
%type <s> STR
%type <ass> state prog decls axioma decl
%type <expressao> exp

%left '+' '-'
%left '/' '*'

%%

axioma : decls prog             { printf("%s\nstart\n%s\nstop\n", $1, $2); }
       ;

decls : decls decl              { asprintf(&$$, "%s\n%s", $1, $2); }
      |                         { $$ = ""; }
      ;

prog : prog state               { asprintf(&$$, "%s\n%s", $1, $2); }
     | state                    { $$ = $1; }
     ;

state : VAR '=' exp ';'         { asprintf(&$$, "%s\nstoreg %d // %c", $3.ass, address($1), $1); }
      | VAR '=' LER ';'         { asprintf(&$$, "read\natoi\nstoreg %d // %c", address($1), $1); }
      | ESCREVER exp ';'        { asprintf(&$$, "%s\nwritei", $2.ass); }
      ;

decl : TINT VAR ';'             { asprintf(&$$, "pushi 0 // %c", $2); address($2) = count; type($2) = 1; count++; }
     | TSTR VAR ';'             { asprintf(&$$, "pushs \"\" // %c", $2); address($2) = count; type($2) = 1; count++; }
     ;

exp : NUM                       { asprintf(&($$.ass), "pushi %d", $1); $$.type = 1; }
    | VAR                       { asprintf(&($$.ass), "pushg %d // %c", address($1), $1); }
    | STR                       { asprintf(&($$.ass), "// fixme pushs %s", $1); $$.type = 2; }
    | exp '+' exp               { asprintf(&($$.ass), "%s\n%s\nadd", $1.ass, $3.ass); }
    | exp '-' exp               { asprintf(&($$.ass), "%s\n%s\nsub", $1.ass, $3.ass); }
    | exp '*' exp               { asprintf(&($$.ass), "%s\n%s\nmul", $1.ass, $3.ass); }
    | exp '/' exp               { asprintf(&($$.ass), "%s\n%s\ndiv", $1.ass, $3.ass); }
    | '(' exp ')'               { $$.ass = $2.ass; }
    ;

%%

int main (int argc, char* argv[]){
    extern FILE *yyin;
    if (argc == 2) yyin = fopen(argv[1], "r");
	yyparse();
	return 0;
}

void yyerror (char* s){
	extern int yylineno;
	extern char* yytext;
	fprintf(stderr, "Linha %d: %s (%s)\n",yylineno,s,yytext);
}