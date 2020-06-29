%{
	int yylex();
	void yyerror(char*);
	#include <stdio.h>
%}

%token tag txt bb

%% 								// bb = '</'

xml : elem                      { printf("OK\n"); }
    ;

elem : abre filhos fecha
     ;

filhos : txt filhos             // (txt | elem)*
       | elem filhos
       | 
       ;

abre : '<' tag '>'
     ;

fecha : bb tag '>'
      ;

%%

int main(){
	yyparse();
	return 0;
}

void yyerror(char* s){
	extern int yylineno;
	extern char* yytext;
	fprintf(stderr, "Linha %d: %s (%s)\n",yylineno,s,yytext);
}