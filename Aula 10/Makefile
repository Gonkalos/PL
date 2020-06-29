all : CALC1 CALC2

CALC1: calculadora.fl calculadora.y
	flex calculadora.fl
	yacc -d calculadora.y
	cc y.tab.c lex.yy.c -o CALC1

CALC2: calculadora.fl calculadora2.y
	flex calculadora.fl
	yacc -d calculadora2.y
	cc y.tab.c lex.yy.c -o CALC2

clean:
	if [ -a CALC1 ]; then rm CALC1; fi;
	if [ -a CALC2 ]; then rm CALC2; fi;
	rm -f *.c
	rm -f *.h