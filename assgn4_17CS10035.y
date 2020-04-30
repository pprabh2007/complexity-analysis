%{ 
	#include <string.h>
	#include <stdio.h>

	extern int yylex();
	void yyerror(char *s);
%}

%union {
int intval;
}

//punctuators

%token SQ_BRACKET_OPEN SQ_BRACKET_CLOSE C_BRACKET_OPEN C_BRACKET_CLOSE ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE

%token MODULO PLUS MINUS MULTIPLY FWD_SLASH AND OR XOR EXCLA_NOT AND_AND OR_OR TILDA LEFT_SHIFT RIGHT_SHIFT

%token LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL_EQUAL NOT_EQUAL

%token CMP_ASGN_MULTIPLY CMP_ASGN_DIVIDE CMP_ASGN_MODULO CMP_ASGN_PLUS CMP_ASGN_MINUS CMP_ASGN_LEFT_SHIFT

%token CMP_ASGN_RIGHT_SHIFT CMP_ASGN_AND CMP_ASGN_XOR CMP_ASGN_OR PLUS_PLUS MINUS_MINUS

%token DOT POINTER_ARROW QUESTION_MARK COLON SEMI_COLON THREE_DOTS ASSIGNMENT_OP COMMA HASH

//comments

%token SINGLE_LINE_COMMENT MULTI_LINE_COMMENT

//keywords

%token INCLUDE AUTO ENUM RESTRICT UNSIGNED BREAK_LOOP EXTERN RETURN_VAL VOID CASE_KEYWORD DT_FLOAT DT_SHORT

%token VOLATILE DT_CHAR FOR_KEYWORD SIGNED WHILE_KEYWORD CONST GOTO SIZEOF DT_BOOL CONTINUE_LOOP IF_KEYWORD

%token STATIC DT_COMPLEX DEFAULT INLINE STRUCT DT_IMAGINARY DO_KEYWORD DT_INT SWITCH DT_DOUBLE DT_LONG TYPEDEF

%token ELSE_KEYWORD REGISTER UNION_KEYWORD

//others

%token IDENTIFIER STRING_LITERAL INTEGER_CONSTANT FLOAT_CONSTANT CHAR_CONSTANT ENUM_CONSTANT

%start translation_unit

%%

constant	
	: INTEGER_CONSTANT
	| FLOAT_CONSTANT 
	| CHAR_CONSTANT 
	| ENUM_CONSTANT
	;

primary_expression	
	: IDENTIFIER { printf("PRIMARY_EXPRESSION\n");}
	| constant { printf("PRIMARY_EXPRESSION\n");}
	| STRING_LITERAL { printf("PRIMARY_EXPRESSION\n");}
	| ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE 
	{ printf("PRIMARY_EXPRESSION\n");}
	;

postfix_expression	
	: primary_expression 
	| postfix_expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE {printf("POSTFIX_EXPRESSION\n");}
	| postfix_expression ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE {printf("POSTFIX_EXPRESSION\n");}
	| postfix_expression ROUND_BRACKET_OPEN argument_expression_list ROUND_BRACKET_CLOSE {printf("POSTFIX_EXPRESSION\n");}
	| postfix_expression DOT IDENTIFIER | postfix_expression POINTER_ARROW IDENTIFIER {printf("POSTFIX_EXPRESSION\n");}
	| postfix_expression PLUS_PLUS {printf("POSTFIX_EXPRESSION\n");}
	| postfix_expression MINUS_MINUS {printf("POSTFIX_EXPRESSION\n");}
	| ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE C_BRACKET_OPEN initializer_list C_BRACKET_CLOSE {printf("POSTFIX_EXPRESSION\n");}
	|  ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE C_BRACKET_OPEN initializer_list COMMA C_BRACKET_CLOSE 
	{printf("POSTFIX_EXPRESSION\n");}
	;

argument_expression_list	
	: assignment_expression {printf("ARGUMENT EXPRESSION LIST\n");}
	| argument_expression_list COMMA assignment_expression 
	{printf("ARGUMENT EXPRESSION LIST\n");}
	;

unary_expression	
	: postfix_expression {printf("UNARY EXPRESSION\n");}
	| PLUS_PLUS unary_expression {printf("UNARY EXPRESSION\n");}
	| MINUS_MINUS unary_expression {printf("UNARY EXPRESSION\n");}
	| unary_operator cast_expression {printf("UNARY EXPRESSION\n");}
	| SIZEOF unary_expression {printf("UNARY EXPRESSION\n");}
	| SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE 
	{printf("UNARY EXPRESSION\n");}
	;

unary_operator	
	: AND {printf("UNARY OPERATOR\n");}
	| MULTIPLY {printf("UNARY OPERATOR\n");}
	| PLUS {printf("UNARY OPERATOR\n");}
	| MINUS {printf("UNARY OPERATOR\n");}
	| TILDA {printf("UNARY OPERATOR\n");}
	| EXCLA_NOT 
	{printf("UNARY OPERATOR\n");}
	;

cast_expression	
	: unary_expression {printf("CAST EXPRESSION\n");}
	| ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression 
	{printf("CAST EXPRESSION\n");}
	;

multiplicative_expression	
	: cast_expression {printf("MULTIPLICATIVE EXPRESSION\n");}
	| multiplicative_expression MULTIPLY cast_expression {printf("MULTIPLICATIVE EXPRESSION\n");}
	| multiplicative_expression FWD_SLASH cast_expression {printf("MULTIPLICATIVE EXPRESSION\n");}
	| multiplicative_expression MODULO cast_expression 
	{printf("MULTIPLICATIVE EXPRESSION\n");}
	;

additive_expression	
	: multiplicative_expression {printf("ADDITIVE EXPRESSION\n");}
	| additive_expression PLUS multiplicative_expression {printf("ADDITIVE EXPRESSION\n");}
	| additive_expression MINUS multiplicative_expression 
	{printf("ADDITIVE EXPRESSION\n");}
	;

shift_expression	
	: additive_expression {printf("SHIFT EXPRESSION\n");}
	| shift_expression LEFT_SHIFT additive_expression {printf("SHIFT EXPRESSION\n");}
	| shift_expression RIGHT_SHIFT additive_expression 
	{printf("SHIFT EXPRESSION\n");}
	;

relational_expression	
	: shift_expression {printf("RELATIONAL EXPRESSION\n");}
	| relational_expression LESS_THAN shift_expression {printf("RELATIONAL EXPRESSION\n");}
	| relational_expression GREATER_THAN shift_expression {printf("RELATIONAL EXPRESSION\n");}
	| relational_expression LESS_THAN_EQUAL shift_expression {printf("RELATIONAL EXPRESSION\n");}
	| relational_expression GREATER_THAN_EQUAL shift_expression 
	{printf("RELATIONAL EXPRESSION\n");}
	;

equality_expression	
	: relational_expression {printf("EQUALITY EXPRESSION\n");}
	| equality_expression EQUAL_EQUAL relational_expression {printf("EQUALITY EXPRESSION\n");}
	| equality_expression NOT_EQUAL relational_expression 
	{printf("EQUALITY EXPRESSION\n");}
	;

AND_expression	
	: equality_expression {printf("AND_expression\n");}
	| AND_expression AND equality_expression 
	{printf("AND_expression\n");}
	;

exclusive_OR_expression	
	: AND_expression {printf("EXCLUSIVE OR EXPRESSION \n");}
	| exclusive_OR_expression XOR AND_expression 
	{printf("EXCLUSIVE OR EXPRESSION \n");}
	; 

inclusive_OR_expression	
	: exclusive_OR_expression {printf("INCLUSIVE OR EXPRESSION\n");}
	| inclusive_OR_expression OR exclusive_OR_expression 
	{printf("INCLUSIVE OR EXPRESSION\n");}
	;

logical_and_expression	
	: inclusive_OR_expression {printf("LOGICAL AND EXPRESSION\n");}
	| logical_and_expression AND_AND inclusive_OR_expression 
	{printf("LOGICAL AND EXPRESSION\n");}
	;

logical_or_expression	
	: logical_and_expression {printf("LOGICAL OR EXPRESSION \n");}
	| logical_or_expression OR_OR logical_and_expression 
	{printf("LOGICAL OR EXPRESSION \n");}
	;

conditional_expression	
	: logical_or_expression {printf("CONDITIONAL EXPRESSION\n");}
	| logical_or_expression QUESTION_MARK expression COLON conditional_expression 
	{printf("CONDITIONAL EXPRESSION\n");}
	;

assignment_expression	
	: conditional_expression {printf("ASSIGNMENT EXPRESSION\n");}
	| unary_expression assignment_operator assignment_expression 
	{printf("ASSIGNMENT EXPRESSION\n");}
	;

assignment_operator	
	: ASSIGNMENT_OP {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_MULTIPLY {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_DIVIDE {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_MODULO {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_PLUS {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_MINUS {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_LEFT_SHIFT {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_RIGHT_SHIFT {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_AND {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_XOR {printf("ASSIGNMENT OPERATOR\n");}
	| CMP_ASGN_OR 
	{printf("ASSIGNMENT OPERATOR\n");}
	;

expression	
	: assignment_expression {printf("EXPRESSION\n");}
	| expression COMMA assignment_expression 
	{printf("EXPRESSION\n");}
	;

constant_expression	
	: conditional_expression 
	{printf("CONSTANT EXPRESSION\n");}
	;


declaration 
	: declaration_specifiers SEMI_COLON {printf("DECLARATION\n");}
	| declaration_specifiers init_declarator_list SEMI_COLON 
	{printf("DECLARATION\n");}
	;

declaration_specifiers 
	: storage_class_specifier {printf("DECLARATION SPECIFIERS\n");}
	| storage_class_specifier declaration_specifiers {printf("DECLARATION SPECIFIERS\n");}
	| type_specifier {printf("DECLARATION SPECIFIERS\n");}
	| type_specifier declaration_specifiers {printf("DECLARATION SPECIFIERS\n");}
	| type_qualifier {printf("DECLARATION SPECIFIERS\n");}
	| type_qualifier declaration_specifiers {printf("DECLARATION SPECIFIERS\n");}
	| function_specifier  {printf("DECLARATION SPECIFIERS\n");}
	| function_specifier declaration_specifiers 
	{printf("DECLARATION SPECIFIERS\n");}
	;

init_declarator_list 
	: init_declarator {printf("INIT DECLARATOR LIST\n");}
	| init_declarator_list COMMA init_declarator 
	{printf("INIT DECLARATOR LIST\n");}
	;

init_declarator 
	: declarator {printf("INIT DECLARATOR\n");}
	| declarator ASSIGNMENT_OP initializer 
	{printf("INIT DECLARATOR\n");}
	;

storage_class_specifier 
	: EXTERN {printf("STORAGE CLASS SPECIFIER\n");}
	| STATIC {printf("STORAGE CLASS SPECIFIER\n");}
	| AUTO {printf("STORAGE CLASS SPECIFIER\n");}
	| REGISTER 
	{printf("STORAGE CLASS SPECIFIER\n");}
	;

type_specifier 
	: VOID {printf("TYPE SPECIFIER\n");}
	| DT_CHAR {printf("TYPE SPECIFIER\n");}
	| DT_SHORT {printf("TYPE SPECIFIER\n");}
	| DT_INT {printf("TYPE SPECIFIER\n");}
	| DT_LONG {printf("TYPE SPECIFIER\n");}
	| DT_FLOAT {printf("TYPE SPECIFIER\n");}
	| DT_DOUBLE {printf("TYPE SPECIFIER\n");}
	| SIGNED {printf("TYPE SPECIFIER\n");}
	| UNSIGNED {printf("TYPE SPECIFIER\n");}
	| DT_BOOL {printf("TYPE SPECIFIER\n");}
	| DT_COMPLEX {printf("TYPE SPECIFIER\n");}
	| DT_IMAGINARY {printf("TYPE SPECIFIER\n");}
	| enum_specifier 
	{printf("TYPE SPECIFIER\n");}
	;

specifier_qualifier_list 
	: type_specifier specifier_qualifier_list {printf("SPECIFIER_QUALIFIER_LIST\n");}
	| type_specifier {printf("SPECIFIER_QUALIFIER_LIST\n");}
	| type_qualifier specifier_qualifier_list {printf("SPECIFIER_QUALIFIER_LIST\n");}
	| type_qualifier 
	{printf("SPECIFIER_QUALIFIER_LIST\n");}
	;


enum_specifier 
	: ENUM C_BRACKET_OPEN enumerator_list C_BRACKET_CLOSE {printf("ENUM_SPECIFIER\n");}
	| ENUM IDENTIFIER C_BRACKET_OPEN enumerator_list C_BRACKET_CLOSE {printf("ENUM_SPECIFIER\n");}
	| ENUM C_BRACKET_OPEN enumerator_list COMMA C_BRACKET_CLOSE {printf("ENUM_SPECIFIER\n");}
	| ENUM IDENTIFIER C_BRACKET_OPEN enumerator_list COMMA C_BRACKET_CLOSE {printf("ENUM_SPECIFIER\n");}
	| ENUM IDENTIFIER 
	{printf("ENUM_SPECIFIER\n");}
	;

enumerator_list 
	: enumerator {printf("ENUMERATOR_LIST\n");}
	| enumerator_list COMMA enumerator 
	{printf("ENUMERATOR_LIST\n");}
	;

enumerator 
	: IDENTIFIER {printf("ENUMERATOR\n");}
	| IDENTIFIER ASSIGNMENT_OP constant_expression 
	{printf("ENUMERATOR\n");}
	;

type_qualifier 
	: CONST {printf("TYPE QUAIFIER \n");}
	| VOLATILE {printf("TYPE QUAIFIER \n");}
	| RESTRICT 
	{printf("TYPE QUAIFIER \n");}
	;

function_specifier 
	: INLINE 
	{printf("FUNCTION SPECIFIER\n");}
	;

declarator 
	: 
	pointer direct_declarator {printf("DECLARATOR\n");}
	| direct_declarator 
	{printf("DECLARATOR\n");}
	;

direct_declarator 
	: IDENTIFIER 
	| ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");}
	| direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt assignment_expression_opt SQ_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");}
	| direct_declarator SQ_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQ_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");}
	| direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt MULTIPLY SQ_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");}
	| direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");}
	| direct_declarator ROUND_BRACKET_OPEN identifier_list ROUND_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");}
	| direct_declarator ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE 
	{printf("DIRECT_DECLARATOR\n");}
	;

type_qualifier_list_opt 
	: %empty {printf("ASSIGNMENT EXPRESSION OPT\n");}
	| type_qualifier_list 
	{printf("TYPE QUALIFIER LIST OPT\n");}
	;

assignment_expression_opt 
	: %empty {printf("ASSIGNMENT EXPRESSION OPT\n");}
	| assignment_expression 
	{printf("ASSIGNMENT EXPRESSION OPT\n");}
	;

pointer 
	: MULTIPLY {printf("POINTER\n");}
	| MULTIPLY type_qualifier_list {printf("POINTER\n");}
	| MULTIPLY pointer {printf("POINTER\n");}
	| MULTIPLY type_qualifier_list pointer 
	{printf("POINTER\n");}
	;

type_qualifier_list 
	: type_qualifier {printf("TYPE QUALIFIER LIST\n");}
	| type_qualifier_list type_qualifier 
	{printf("TYPE QUALIFIER LIST\n");}
	;

parameter_type_list 
	: parameter_list {printf("PARAMETER TYPE LIST\n");}
	| parameter_list COMMA THREE_DOTS 
	{printf("PARAMETER TYPE LIST\n");}
	;

parameter_list
	: parameter_declaration {printf("PARAMETER LIST\n");}
	| parameter_list COMMA parameter_declaration 
	{printf("PARAMETER LIST\n");}
	;

parameter_declaration
	: declaration_specifiers declarator {printf("PARAMETER DECLARATION\n");}
	| declaration_specifiers 
	{printf("PARAMETER DECLARATION\n");}
	;

identifier_list
	: IDENTIFIER {printf("IDENTIFIER LIST\n");}
	| identifier_list COMMA IDENTIFIER 
	{printf("IDENTIFIER LIST\n");}
	;

type_name
	: specifier_qualifier_list 
	{printf("TYPE NAME\n");}
	;

initializer
	: assignment_expression {printf("INITIALIZER\n");}
	| C_BRACKET_OPEN initializer_list C_BRACKET_CLOSE {printf("INITIALIZER\n");}
	| C_BRACKET_OPEN initializer_list COMMA C_BRACKET_CLOSE
	{printf("INITIALIZER\n");}
	;

initializer_list
	: initializer {printf("INITIALIZER LIST\n");}
	| designation initializer {printf("INITIALIZER LIST\n");}
	| initializer_list COMMA initializer {printf("INITIALIZER LIST\n");}
	|  initializer_list COMMA designation initializer 
	{printf("INITIALIZER LIST\n");}
	;

designation
	: designator_list ASSIGNMENT_OP 
	{printf("DESIGNATION\n");}
	;

designator_list
	: designator {printf("DESIGNATOR LIST\n");}
	| designator_list designator 
	{printf("DESIGNATOR LIST\n");}
	;

designator
	: SQ_BRACKET_OPEN constant_expression SQ_BRACKET_CLOSE {printf("DESIGNATOR\n");}
	| DOT IDENTIFIER 
	{printf("DESIGNATOR\n");}
	;

statement
	: labeled_statement {printf("STATEMENT\n");}
	| compound_statement {printf("STATEMENT\n");}
	| expression_statement {printf("STATEMENT\n");}
	| selection_statement {printf("STATEMENT\n");}
	| iteration_statement {printf("STATEMENT\n");}
	| jump_statement 
	{printf("STATEMENT\n");}
	;

labeled_statement
	: IDENTIFIER COLON statement {printf("LABELED STATMENT\n");}
	| CASE_KEYWORD constant_expression COLON statement {printf("LABELED STATMENT\n");}
	| DEFAULT COLON statement 
	{printf("LABELED STATMENT\n");}
	;

compound_statement
	: C_BRACKET_OPEN C_BRACKET_CLOSE {printf("COMPOUND STATEMENT\n");}
	| C_BRACKET_OPEN block_item_list C_BRACKET_CLOSE 
	{printf("COMPOUND STATEMENT\n");}
	;

block_item_list
	: block_item {printf("BLOCK ITEM LIST\n");}
	| block_item_list block_item 
	{printf("BLOCK ITEM LIST\n");}
	;

block_item
	: declaration {printf("BLOCK ITEM\n");}
	| statement 
	{printf("BLOCK ITEM\n");}
	;

expression_statement 
	: SEMI_COLON {printf("EXPRESSION STATEMENT\n");}
	| expression SEMI_COLON 
	{printf("EXPRESSION STATEMENT\n");}
	;

selection_statement
	: IF_KEYWORD ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {printf("SELECTION STATEMENT\n");}
	| IF_KEYWORD ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE_KEYWORD statement {printf("SELECTION STATEMENT\n");}
	| SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement 
	{printf("SELECTION STATEMENT\n");}
	;

iteration_statement
	: WHILE_KEYWORD ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {printf("ITERATION STATEMENT\n");}
	| DO_KEYWORD statement WHILE_KEYWORD ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMI_COLON {printf("ITERATION STATEMENT\n");}
	| FOR_KEYWORD ROUND_BRACKET_OPEN expression_statement expression_statement ROUND_BRACKET_CLOSE statement {printf("ITERATION STATEMENT\n");}
	| FOR_KEYWORD ROUND_BRACKET_OPEN expression_statement expression_statement expression ROUND_BRACKET_CLOSE statement {printf("ITERATION STATEMENT\n");}
	| FOR_KEYWORD ROUND_BRACKET_OPEN declaration expression_statement expression ROUND_BRACKET_CLOSE statement {printf("ITERATION STATEMENT\n");}
	| FOR_KEYWORD ROUND_BRACKET_OPEN declaration expression_statement ROUND_BRACKET_CLOSE statement
	{printf("ITERATION STATEMENT\n");}
	;

jump_statement 
	: GOTO IDENTIFIER SEMI_COLON {printf("JUMP STATEMENT\n");} 
	| CONTINUE_LOOP SEMI_COLON {printf("JUMP STATEMENT\n");} 
	| BREAK_LOOP SEMI_COLON {printf("JUMP STATEMENT\n");} 
	| RETURN_VAL SEMI_COLON {printf("JUMP STATEMENT\n");} 
	| RETURN_VAL expression SEMI_COLON 
	{printf("JUMP STATEMENT\n");} 
	;







translation_unit
	: external_declaration {printf("TRANSLATION UNIT\n");}
	| translation_unit external_declaration 
	{printf("TRANSLATION UNIT\n");}
	;

external_declaration
	: function_definition {printf("EXTERNAL DECLARATION\n");}
	| declaration 
	{printf("EXTERNAL DECLARATION\n");}
	;

function_definition 
	: declaration_specifiers declarator declaration_list compound_statement {printf("FUNCTION DEFINITION\n");}
	| declaration_specifiers declarator compound_statement 
	{printf("FUNCTION DEFINITION\n");}
	;

declaration_list 
	: declaration {printf("DECLARATION LIST\n");}
	| declaration_list declaration 
	{printf("DECLARATION LIST\n");}
	;

%%

void yyerror(char *s) {
	printf ("ERROR IS : %s",s);
}
