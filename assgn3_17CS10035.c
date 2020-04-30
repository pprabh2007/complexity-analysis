#include <stdio.h>
#include "assgn3_17CS10035.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

int main(void)
{
	int token;

	while(token=yylex())
	{
		char *token_name;
		switch(token)
		{
			case 1:
				token_name="PUNCTUATOR";
				break;
			case 2:
				token_name="SINGLE_LINE_COMMENT";
				break;
			case 3:
				token_name="MULTI_LINE_COMMENT";
				break;
			case 4:
				token_name="KEYWORD";
				break;
			case 5:
				token_name="IDENTIFIER";
				break;
			case 6:
				token_name="STRING_LITERAL";
				break;
			case 7:
				token_name="CONSTANT";
				break;
			default:
				token_name="*****ERROR!*****";

		}
		printf("%d\t%s\t%s\n", yylineno, yytext, token_name);
	}
	return 0;
}