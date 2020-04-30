a.out: lex.yy.o y.tab.o assgn4_17CS10035_main.o
	gcc lex.yy.o y.tab.o assgn4_17CS10035_main.o -lfl

assgn4_17CS10035_main.o: assgn4_17CS10035_main.c
	gcc -c assgn4_17CS10035_main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: assgn4_17CS10035.l y.tab.h
	flex assgn4_17CS10035.l

y.tab.c: assgn4_17CS10035.y
	yacc -dtv assgn4_17CS10035.y -W

y.tab.h: assgn4_17CS10035.y
	yacc -dtv assgn4_17CS10035.y -W

clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o assgn4_17CS10035_main.o y.output a.out

test: 
	./a.out < test.c

