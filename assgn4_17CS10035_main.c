/* 
	PRABHPREET SINGH SODHI
	17CS10035
	ASSIGNMENT 4
*/
#include <stdio.h>
#include "y.tab.h"
extern char* yytext;
extern int yyparse();
int main() {
  int token;
  yyparse();
  return 0;  
}
