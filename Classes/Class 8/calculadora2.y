%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    int yylex();
    void yyerror(char*);

    double mem[256];
    double ans;
%}

%union{
    double n;
    char v;
    double (*f)(double);
}

%token NUM VAR ANS FUN1
%type <n> NUM exp
%type <v> VAR ANS
%type <f> FUN1

%right '='
%left '+' '-'
%left '*' '/'
%right '^'

%%

calc : calc exp '\n'        { printf("%f\n", $2); ans = $2; }
     | calc error '\n'
     | calc '\n'
     |
     ;


exp : exp '+' exp           { $$ = $1 + $3; }    
    | exp '-' exp           { $$ = $1 - $3; }
    | exp '*' exp           { $$ = $1 * $3; } 
    | exp '/' exp           { $$ = $1 / $3; }   
    | exp '^' exp           { $$ = pow($1, $3); }       // error: -2 ^ 2 = -4 !
    | VAR '=' exp           { $$ = mem[$1] = $3; }
    | NUM                   { $$ = $1; }
    | VAR                   { $$ = mem[$1]; }
    | ANS                   { $$ = ans; }
    | '(' exp ')'           { $$ = $2; }
    | '-' exp               { $$ = -1 * $2; }  
    | FUN1 '(' exp ')'      { $$ = ($1)($3); }
    ;

%%

int main(){
	yyparse();
	return 0;
}

void yyerror (char* s){
	extern int yylineno;
	extern char* yytext;
	fprintf(stderr, "Linha %d: %s (%s)\n",yylineno,s,yytext);
}