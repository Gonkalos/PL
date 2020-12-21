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

%token NUM SQRT VAR ANS FUN1
%type <n> NUM exp termo parc factor atrib
%type <v> VAR ANS
%type <f> FUN1

%%

calc : calc exp '\n'        { printf("%f\n", $2); ans = $2; }
     | calc atrib '\n'  
     | calc error '\n'
     | calc '\n'
     |
     ;


exp : parc               { $$ = $1; }
    | exp '+' parc       { $$ = $1 + $3; }    
    | exp '-' parc       { $$ = $1 - $3; }
    ;     


parc : factor               { $$ = $1; }
     | parc '*' factor      { $$ = $1 * $3; } 
     | parc '/' factor      { $$ = $1 / $3; }   
     ;     


factor : termo                  { $$ = $1; }
       | termo '^' factor       { $$ = pow($1, $3); }
       ;


atrib : VAR '=' exp         { mem[$1] = $3; }
      ;


termo : NUM                 { $$ = $1; }
      | VAR                 { $$ = mem[$1]; }
      | ANS                 { $$ = ans; }
      | SQRT '(' exp ')'    { $$ = sqrt($3); }
      | '(' exp ')'         { $$ = $2; }
      | FUN1 '(' exp ')'    { $$ = ($1)($3); }
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