%{
    #define _GNU_SOURCE

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    int yylex();
    void yyerror(char*);

    int count = 0;
    int mem[256];

%}

%union{
    int n;
    char c;
    char* ass;    // código assembly
}

%token NUM VAR INT LER ESCREVER
%type <n> NUM
%type <c> VAR
%type <ass> exp state prog decls axioma decl

%left '+' '-'

%%

axioma : decls prog             { printf("%s\nstart\n%s\nstop\n", $1, $2); }
       ;

decls : decls decl              { asprintf(&$$, "%s\n%s", $1, $2); }
      |                         { $$ = ""; }
      ;

prog : prog state               { asprintf(&$$, "%s\n%s", $1, $2); }
     | state                    { $$ = $1; }
     ;

state : VAR '=' exp ';'         { asprintf(&$$, "%s\nstoreg %d // %c", $3, mem[$1], $1); }
      | VAR '=' LER ';'         { asprintf(&$$, "read\natoi\nstoreg %d // %c", mem[$1], $1); }
      | ESCREVER exp ';'        { asprintf(&$$, "%s\nwritei", $2); }
      ;

decl : INT VAR ';'              { asprintf(&$$, "pushi 0 // %c", $2); mem[$2] = count; count++; }
     ;

exp : NUM                       { asprintf(&$$, "pushi %d", $1); }
    | VAR                       { asprintf(&$$, "pushg %d // %c", mem[$1], $1); }
    | exp '+' exp               { asprintf(&$$, "%s\n%s\nadd", $1, $3); }
    | exp '-' exp               { asprintf(&$$, "%s\n%s\nsub", $1, $3); }
    | exp '*' exp               { asprintf(&$$, "%s\n%s\nmul", $1, $3); }
    | exp '/' exp               { asprintf(&$$, "%s\n%s\ndiv", $1, $3); }
    | '(' exp ')'               { $$ = $2; }
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