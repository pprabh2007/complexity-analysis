/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SQ_BRACKET_OPEN = 258,
    SQ_BRACKET_CLOSE = 259,
    C_BRACKET_OPEN = 260,
    C_BRACKET_CLOSE = 261,
    ROUND_BRACKET_OPEN = 262,
    ROUND_BRACKET_CLOSE = 263,
    MODULO = 264,
    PLUS = 265,
    MINUS = 266,
    MULTIPLY = 267,
    FWD_SLASH = 268,
    AND = 269,
    OR = 270,
    XOR = 271,
    EXCLA_NOT = 272,
    AND_AND = 273,
    OR_OR = 274,
    TILDA = 275,
    LEFT_SHIFT = 276,
    RIGHT_SHIFT = 277,
    LESS_THAN = 278,
    GREATER_THAN = 279,
    LESS_THAN_EQUAL = 280,
    GREATER_THAN_EQUAL = 281,
    EQUAL_EQUAL = 282,
    NOT_EQUAL = 283,
    CMP_ASGN_MULTIPLY = 284,
    CMP_ASGN_DIVIDE = 285,
    CMP_ASGN_MODULO = 286,
    CMP_ASGN_PLUS = 287,
    CMP_ASGN_MINUS = 288,
    CMP_ASGN_LEFT_SHIFT = 289,
    CMP_ASGN_RIGHT_SHIFT = 290,
    CMP_ASGN_AND = 291,
    CMP_ASGN_XOR = 292,
    CMP_ASGN_OR = 293,
    PLUS_PLUS = 294,
    MINUS_MINUS = 295,
    DOT = 296,
    POINTER_ARROW = 297,
    QUESTION_MARK = 298,
    COLON = 299,
    SEMI_COLON = 300,
    THREE_DOTS = 301,
    ASSIGNMENT_OP = 302,
    COMMA = 303,
    HASH = 304,
    SINGLE_LINE_COMMENT = 305,
    MULTI_LINE_COMMENT = 306,
    INCLUDE = 307,
    AUTO = 308,
    ENUM = 309,
    RESTRICT = 310,
    UNSIGNED = 311,
    BREAK_LOOP = 312,
    EXTERN = 313,
    RETURN_VAL = 314,
    VOID = 315,
    CASE_KEYWORD = 316,
    DT_FLOAT = 317,
    DT_SHORT = 318,
    VOLATILE = 319,
    DT_CHAR = 320,
    FOR_KEYWORD = 321,
    SIGNED = 322,
    WHILE_KEYWORD = 323,
    CONST = 324,
    GOTO = 325,
    SIZEOF = 326,
    DT_BOOL = 327,
    CONTINUE_LOOP = 328,
    IF_KEYWORD = 329,
    STATIC = 330,
    DT_COMPLEX = 331,
    DEFAULT = 332,
    INLINE = 333,
    STRUCT = 334,
    DT_IMAGINARY = 335,
    DO_KEYWORD = 336,
    DT_INT = 337,
    SWITCH = 338,
    DT_DOUBLE = 339,
    DT_LONG = 340,
    TYPEDEF = 341,
    ELSE_KEYWORD = 342,
    REGISTER = 343,
    UNION_KEYWORD = 344,
    IDENTIFIER = 345,
    STRING_LITERAL = 346,
    INTEGER_CONSTANT = 347,
    FLOAT_CONSTANT = 348,
    CHAR_CONSTANT = 349,
    ENUM_CONSTANT = 350
  };
#endif
/* Tokens.  */
#define SQ_BRACKET_OPEN 258
#define SQ_BRACKET_CLOSE 259
#define C_BRACKET_OPEN 260
#define C_BRACKET_CLOSE 261
#define ROUND_BRACKET_OPEN 262
#define ROUND_BRACKET_CLOSE 263
#define MODULO 264
#define PLUS 265
#define MINUS 266
#define MULTIPLY 267
#define FWD_SLASH 268
#define AND 269
#define OR 270
#define XOR 271
#define EXCLA_NOT 272
#define AND_AND 273
#define OR_OR 274
#define TILDA 275
#define LEFT_SHIFT 276
#define RIGHT_SHIFT 277
#define LESS_THAN 278
#define GREATER_THAN 279
#define LESS_THAN_EQUAL 280
#define GREATER_THAN_EQUAL 281
#define EQUAL_EQUAL 282
#define NOT_EQUAL 283
#define CMP_ASGN_MULTIPLY 284
#define CMP_ASGN_DIVIDE 285
#define CMP_ASGN_MODULO 286
#define CMP_ASGN_PLUS 287
#define CMP_ASGN_MINUS 288
#define CMP_ASGN_LEFT_SHIFT 289
#define CMP_ASGN_RIGHT_SHIFT 290
#define CMP_ASGN_AND 291
#define CMP_ASGN_XOR 292
#define CMP_ASGN_OR 293
#define PLUS_PLUS 294
#define MINUS_MINUS 295
#define DOT 296
#define POINTER_ARROW 297
#define QUESTION_MARK 298
#define COLON 299
#define SEMI_COLON 300
#define THREE_DOTS 301
#define ASSIGNMENT_OP 302
#define COMMA 303
#define HASH 304
#define SINGLE_LINE_COMMENT 305
#define MULTI_LINE_COMMENT 306
#define INCLUDE 307
#define AUTO 308
#define ENUM 309
#define RESTRICT 310
#define UNSIGNED 311
#define BREAK_LOOP 312
#define EXTERN 313
#define RETURN_VAL 314
#define VOID 315
#define CASE_KEYWORD 316
#define DT_FLOAT 317
#define DT_SHORT 318
#define VOLATILE 319
#define DT_CHAR 320
#define FOR_KEYWORD 321
#define SIGNED 322
#define WHILE_KEYWORD 323
#define CONST 324
#define GOTO 325
#define SIZEOF 326
#define DT_BOOL 327
#define CONTINUE_LOOP 328
#define IF_KEYWORD 329
#define STATIC 330
#define DT_COMPLEX 331
#define DEFAULT 332
#define INLINE 333
#define STRUCT 334
#define DT_IMAGINARY 335
#define DO_KEYWORD 336
#define DT_INT 337
#define SWITCH 338
#define DT_DOUBLE 339
#define DT_LONG 340
#define TYPEDEF 341
#define ELSE_KEYWORD 342
#define REGISTER 343
#define UNION_KEYWORD 344
#define IDENTIFIER 345
#define STRING_LITERAL 346
#define INTEGER_CONSTANT 347
#define FLOAT_CONSTANT 348
#define CHAR_CONSTANT 349
#define ENUM_CONSTANT 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "assgn4_17CS10035.y" /* yacc.c:1909  */

int intval;

#line 248 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
