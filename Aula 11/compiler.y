%{
#define _GNU_SOURCE     

  int yylex();
  void yyerror(char*);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int COUNT_VAR = 0;
int LBL_COUNT = 0; // label count

struct simb{
  int add;  // adress in the stack
  int typ;  // 1=int 2=string 3=real 
} TS[256];

#define _ad(x) TS[x].add
#define _ty(x) TS[x].typ

%}

%union{
    char c ;   // id de variável
    char*s ;   // string
    int n  ;
    char* ass; // código assembly
    struct exp{ char* ass; int typ; } ex; // expressão com tipo
}

%token TSTR TINT LER ESCREVER WHILE IF ELSE
%token <c> VAR 
%token <n> NUM 
%token <s> STR 

%type <ass> state prog decls decl whilestat ifstat
%type <ex> exp 

%left '+' '-'
%left '/' '*'

%%
axioma: decls prog      {printf("%s\nstart\n%s\nstop\n",$1,$2);}
      ;

decls:                  {$$ = "";}
     | decls decl       {asprintf(&$$, "%s\n%s", $1, $2);}
     ;

prog: prog state        {asprintf(&$$, "%s\n%s", $1, $2);}
    | state             {$$ = $1;}
    ;

state: VAR '=' exp ';'  {asprintf(&$$, "%s\nstoreg %d //%c",$3.ass,_ad($1),$1);}
     | VAR '=' LER ';'  {
         if(_ty($1)== 1) asprintf(&$$, "read\natoi\nstoreg %d //%c",_ad($1),$1);
         if(_ty($1)== 2) asprintf(&$$, "read\nstoreg %d //%c",_ad($1),$1);
        }
        
     | ESCREVER exp ';' { 
        if($2.typ == 1) asprintf(&$$, "%s\nwritei\n",$2.ass);
        if($2.typ == 2) asprintf(&$$, "%s\nwrites\n",$2.ass);
        }
     | whilestat
     | ifstat
     ;

states : states state
       |
       ;

whilestat : WHILE '(' exp ')' '{' state '}'     {LBL_COUNT++; 
                                                 asprintf(&$$, "while%d:\n%s\njz fim%d\n%s\njump while%d\nfim%d:", LBL_COUNT, $3, LBL_COUNT, $6, LBL_COUNT, LBL_COUNT);}
          ;

ifstat : IF '(' exp ')' '{' states '}' ELSE '{' states '}'      {LBL_COUNT++;
                                                                 asprintf(&$$, "%s\njz else%d\n%d\njump fim%d\n)}
       ;

decl: TINT VAR ';'      {asprintf(&$$, "pushi 0//%c",$2); 
                         _ad($2) = COUNT_VAR; 
                         _ty($2) = 1; 
                         COUNT_VAR++;}
    | TSTR VAR ';'      {asprintf(&$$, "pushs \"\" //%c",$2); 
                         _ad($2) = COUNT_VAR; 
                         _ty($2) = 2; 
                         COUNT_VAR++;}
    ;   

exp: NUM                {asprintf(&($$.ass), "pushi %d",$1); 
                         $$.typ = 1;}
   | VAR                {asprintf(&($$.ass), "pushg %d // %c",_ad($1),$1);
                         $$.typ = _ty($1);}
   | STR                {asprintf(&($$.ass), "pushs %s ",$1); 
                         $$.typ = 2;}
   | exp '+' exp        {asprintf(&($$.ass), "%s\n%s\nadd",$1.ass,$3.ass);
                         $$.typ = 1;}
   | exp '-' exp        {asprintf(&($$.ass), "%s\n%s\nsub",$1.ass,$3.ass);
                         $$.typ = 1;}
   | exp '*' exp        {asprintf(&($$.ass), "%s\n%s\nmul",$1.ass,$3.ass);
                         $$.typ = 1;}
   | exp '/' exp        {asprintf(&($$.ass), "%s\n%s\ndiv",$1.ass,$3.ass);
                         $$.typ = 1;}
   | '(' exp ')'        {$$=$2;}
   ;

%%

int main(int argc, char* argv[]){
    extern FILE *yyin;
    if(argc == 2){
       yyin = fopen(argv[1],"r");}
    yyparse();
    return 0;
}

void yyerror(char *s){
    extern int yylineno;
    extern char* yytext;
    fprintf(stderr, "linha %d: %s (%s)\n", yylineno, s, yytext);
}
