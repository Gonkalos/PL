%{
	int yylex();
	void yyerror(char*);
	#include <stdio.h>
%}

%union{ char* s; }
%token id str txt ab bf
%type <s> id str txt

%%                                  // bb = '</'   bf = '/>'

xml : elem                         
    ;

elem : abre filhos fecha
     ;

filhos : txt filhos                 // (txt | elem)*
       | elem filhos
       | 
       ;

abre : '<' id atributos '>'         { printf("-> %s\n", $2); }
     ;

abrefecha : '<' id atributos bf     { printf("-> %s\n", $2); }

fecha : ab id '>'
      ;

atributos : id '=' str atributos    // (id = str)*
          |
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