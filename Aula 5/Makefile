analisadorLexico : Ex1.fl
	flex Ex1.fl
	cc -o analisadorLexico lex.yy.c

Ex1-inc: Ex1-inc.fl Ex1-inc.y
	flex Ex1-inc.fl
	yacc Ex1-inc.y
	cc y.tab.c -o Ex1-inc

Ex1-cs: Ex1-cs.fl Ex1-cs.y
	flex Ex1-cs.fl
	yacc -d Ex1-cs.y
	cc y.tab.c lex.yy.c -o Ex1-cs