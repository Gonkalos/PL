%{
	int yylex();
	void yyerror(char*);
	#include <stdio.h>
%}

%%

TEXTO : LP {printf("OK\n");}

LP : BPE LP 				// Linguagem de Parêntesis
   | 
   ;

BPE : '(' LP ')'   			// Bloco de Parêntesis Equilibrados
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