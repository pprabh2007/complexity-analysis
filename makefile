a.out:	lex.yy.c
	gcc assgn3_17CS10035.c lex.yy.c

lex.yy.c:	assgn3_17CS10035.l
	lex assgn3_17CS10035.l

clean:			
	rm lex.yy.c a.out

test_default:			
	./a.out < assgn3_17CS10035_test.c

test_other:
	./a.out
