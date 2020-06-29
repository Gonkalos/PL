XML: XML.fl XML.y
	flex XML.fl
	yacc -d XML.y
	cc y.tab.c lex.yy.c -o XML