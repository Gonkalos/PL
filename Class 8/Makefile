all : CALC CALC2

CALC: calculadora.fl calculadora.y
	flex calculadora.fl
	yacc -d calculadora.y
	cc y.tab.c lex.yy.c -o CALC

CALC2: calculadora.fl calculadora2.y
	flex calculadora.fl
	yacc -d calculadora2.y
	cc y.tab.c lex.yy.c -o CALC2

clean:
	if [ -a CALC ]; then rm CALC; fi;
	if [ -a CALC2 ]; then rm CALC2; fi;
	rm -f *.c
	rm -f *.h