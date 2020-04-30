%{
#include "assgn3_17CS10035.h"
%}

%option yylineno

escape_seq "\\\\"|"\\\'"|"\\\""|"\\\?"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"

s_char {escape_seq}|[^\"\\\n]
s_char_SEQ ({s_char})+
string_literal_regex (\"){s_char_SEQ}(\")

c_char {escape_seq}|[^\'\\\n]
c_char_seq ({c_char})+
char_const_regex (\')({c_char_seq})(\')

integer_const_regex 0|[1-9][0-9]* 

digit_seq [0-9]+
exp_part (E|e)(\+|\-)?{digit_seq}
fraction_const_regex ({digit_seq}?(\.){digit_seq})|({digit_seq}(\.))  
float_const_regex ({fraction_const_regex})({exp_part}?)|({digit_seq})({exp_part})

enum_const_regex [a-zA-Z][a-zA-Z0-9]*
%%

[\t\n ] ;

"[" return PUNCTUATOR;
"]" return PUNCTUATOR;
"{" return PUNCTUATOR;
"}" return PUNCTUATOR;
"." return PUNCTUATOR;
"->" return PUNCTUATOR;
"++" return PUNCTUATOR;
"--" return PUNCTUATOR;
"&" return PUNCTUATOR;
"*" return PUNCTUATOR;
"+" return PUNCTUATOR;
"-" return PUNCTUATOR;
"~" return PUNCTUATOR;
"!" return PUNCTUATOR;
"/" return PUNCTUATOR;
"%" return PUNCTUATOR;
"<<" return PUNCTUATOR;
">>" return PUNCTUATOR;
"<" return PUNCTUATOR;
">" return PUNCTUATOR;
"<=" return PUNCTUATOR;
">=" return PUNCTUATOR;
"==" return PUNCTUATOR;
"!=" return PUNCTUATOR;
"^" return PUNCTUATOR;
"|" return PUNCTUATOR;
"&&" return PUNCTUATOR;
"||" return PUNCTUATOR;
"?" return PUNCTUATOR;
":" return PUNCTUATOR;
";" return PUNCTUATOR;
"..." return PUNCTUATOR;
"=" return PUNCTUATOR;
"*=" return PUNCTUATOR;
"/=" return PUNCTUATOR;
"%=" return PUNCTUATOR;
"+=" return PUNCTUATOR;
"-=" return PUNCTUATOR;
"<<=" return PUNCTUATOR;
">>=" return PUNCTUATOR;
"&=" return PUNCTUATOR;
"^=" return PUNCTUATOR;
"|=" return PUNCTUATOR;
"," return PUNCTUATOR;
"#" return PUNCTUATOR;
"(" return PUNCTUATOR;
")" return PUNCTUATOR;

\/\/.* return SINGLE_LINE_COMMENT;
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]  return MULTI_LINE_COMMENT;

"include" return KEYWORD;
"auto" return KEYWORD;
"enum" return KEYWORD;
"restrict" return KEYWORD;
"unsigned" return KEYWORD;
"break" return KEYWORD;
"extern" return KEYWORD;
"return" return KEYWORD;
"void" return KEYWORD;
"case" return KEYWORD;
"float" return KEYWORD;
"short" return KEYWORD;
"volatile" return KEYWORD;
"char" return KEYWORD;
"for" return KEYWORD;
"signed" return KEYWORD;
"while" return KEYWORD;
"const" return KEYWORD;
"goto" return KEYWORD;
"sizeof" return KEYWORD;
"_Bool" return KEYWORD;
"continue" return KEYWORD;
"if" return KEYWORD;
"static" return KEYWORD;
"_Complex" return KEYWORD;
"default" return KEYWORD;
"inline" return KEYWORD;
"struct" return KEYWORD;
"_Imaginary" return KEYWORD;
"do" return KEYWORD;
"int" return KEYWORD;
"switch" return KEYWORD;
"double" return KEYWORD;
"long" return KEYWORD;
"typedef" return KEYWORD;
"else" return KEYWORD;
"register" return KEYWORD;
"union" return KEYWORD;

[a-zA-Z][a-zA-Z0-9]* return IDENTIFIER;

{string_literal_regex} return STRING_LITERAL;
{enum_const_regex}|{integer_const_regex}|{float_const_regex}|{char_const_regex} return CONSTANT;

%%

int yywrap(void)
{
	return 1;
}