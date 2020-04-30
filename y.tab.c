/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "assgn4_17CS10035.y" /* yacc.c:339  */
 
	#include <string.h>
	#include <stdio.h>

	extern int yylex();
	void yyerror(char *s);

#line 74 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 9 "assgn4_17CS10035.y" /* yacc.c:355  */

int intval;

#line 308 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 325 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1430

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    51,    52,    53,    57,    58,    59,    60,
      65,    66,    67,    68,    69,    69,    70,    71,    72,    73,
      78,    79,    84,    85,    86,    87,    88,    89,    94,    95,
      96,    97,    98,    99,   104,   105,   110,   111,   112,   113,
     118,   119,   120,   125,   126,   127,   132,   133,   134,   135,
     136,   141,   142,   143,   148,   149,   154,   155,   160,   161,
     166,   167,   172,   173,   178,   179,   184,   185,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   205,
     206,   211,   217,   218,   223,   224,   225,   226,   227,   228,
     229,   230,   235,   236,   241,   242,   247,   248,   249,   250,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   272,   273,   274,   275,   281,   282,   283,
     284,   285,   290,   291,   296,   297,   302,   303,   304,   309,
     315,   316,   321,   322,   323,   324,   325,   326,   327,   328,
     333,   334,   339,   340,   345,   346,   347,   348,   353,   354,
     359,   360,   365,   366,   371,   372,   377,   378,   383,   388,
     389,   390,   395,   396,   397,   398,   403,   408,   409,   414,
     415,   420,   421,   422,   423,   424,   425,   430,   431,   432,
     437,   438,   443,   444,   449,   450,   455,   456,   461,   462,
     463,   468,   469,   470,   471,   472,   473,   478,   479,   480,
     481,   482,   493,   494,   499,   500,   505,   506,   511,   512
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SQ_BRACKET_OPEN", "SQ_BRACKET_CLOSE",
  "C_BRACKET_OPEN", "C_BRACKET_CLOSE", "ROUND_BRACKET_OPEN",
  "ROUND_BRACKET_CLOSE", "MODULO", "PLUS", "MINUS", "MULTIPLY",
  "FWD_SLASH", "AND", "OR", "XOR", "EXCLA_NOT", "AND_AND", "OR_OR",
  "TILDA", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL",
  "CMP_ASGN_MULTIPLY", "CMP_ASGN_DIVIDE", "CMP_ASGN_MODULO",
  "CMP_ASGN_PLUS", "CMP_ASGN_MINUS", "CMP_ASGN_LEFT_SHIFT",
  "CMP_ASGN_RIGHT_SHIFT", "CMP_ASGN_AND", "CMP_ASGN_XOR", "CMP_ASGN_OR",
  "PLUS_PLUS", "MINUS_MINUS", "DOT", "POINTER_ARROW", "QUESTION_MARK",
  "COLON", "SEMI_COLON", "THREE_DOTS", "ASSIGNMENT_OP", "COMMA", "HASH",
  "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "INCLUDE", "AUTO", "ENUM",
  "RESTRICT", "UNSIGNED", "BREAK_LOOP", "EXTERN", "RETURN_VAL", "VOID",
  "CASE_KEYWORD", "DT_FLOAT", "DT_SHORT", "VOLATILE", "DT_CHAR",
  "FOR_KEYWORD", "SIGNED", "WHILE_KEYWORD", "CONST", "GOTO", "SIZEOF",
  "DT_BOOL", "CONTINUE_LOOP", "IF_KEYWORD", "STATIC", "DT_COMPLEX",
  "DEFAULT", "INLINE", "STRUCT", "DT_IMAGINARY", "DO_KEYWORD", "DT_INT",
  "SWITCH", "DT_DOUBLE", "DT_LONG", "TYPEDEF", "ELSE_KEYWORD", "REGISTER",
  "UNION_KEYWORD", "IDENTIFIER", "STRING_LITERAL", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "CHAR_CONSTANT", "ENUM_CONSTANT", "$accept",
  "constant", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF -276

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-276)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1310,  -276,     0,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,    18,  1310,  1310,  -276,  1310,  1310,   819,
    -276,  -276,   -55,    78,     7,     4,  -276,  -276,     1,  -276,
    1155,    47,    -1,  -276,  -276,  -276,  -276,  -276,  -276,    11,
      12,  -276,   -55,    57,  -276,  -276,     4,  -276,     7,   360,
     553,  -276,    18,  -276,  1198,    59,  1234,    47,  1014,  -276,
      14,    16,  -276,  -276,  -276,  -276,    79,  -276,   776,  -276,
    -276,  -276,  -276,  -276,  -276,  1061,  1061,  -276,    74,   898,
    1014,   125,   134,    73,  1072,   130,   171,   137,   542,   181,
     149,  -276,  -276,  -276,  -276,  -276,  -276,  -276,   180,   445,
    1014,  -276,   177,   129,   170,   200,   168,   183,   192,   184,
     196,    38,  -276,  -276,    85,  -276,  -276,  -276,  -276,   451,
    -276,  -276,  -276,  -276,  -276,   302,  -276,  -276,  -276,  -276,
    -276,    60,  1106,    60,  -276,  -276,     7,   205,   169,  -276,
      26,  -276,  -276,  -276,  -276,  -276,  -276,    15,    36,  1345,
    -276,  1345,   210,   776,  -276,  -276,  -276,  -276,   128,   186,
     687,  1014,   187,   776,  -276,  -276,  1014,   542,   179,  1014,
     542,  1014,   909,  -276,  -276,   155,   158,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  1014,  -276,
    1014,  1014,  1014,  1014,  1014,  1014,  1014,  1014,  1014,  1014,
    1014,  1014,  1014,  1014,  1014,  1014,  1014,  1014,  1014,  -276,
    1014,  -276,  -276,  1014,   161,  -276,    23,   553,     6,  -276,
    1014,   248,  -276,   253,  -276,  -276,  1274,  -276,   172,  -276,
    -276,  -276,  -276,   644,   251,  -276,   542,   967,   967,    40,
    -276,   255,    43,  -276,   257,    53,  -276,    19,  -276,    61,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,   177,   177,   129,
     129,   170,   170,   170,   170,   200,   200,   168,   183,   192,
     184,   196,    77,  -276,   271,  -276,  -276,   195,  -276,  -276,
    -276,   273,  -276,  -276,  -276,  -276,  -276,   302,  -276,   275,
    -276,   956,  1003,   542,   275,   542,  1014,   542,  -276,  -276,
    1014,  1014,  -276,  -276,  -276,   553,  -276,    37,   542,    62,
     542,    70,  -276,   191,    72,  -276,  -276,  -276,  -276,  -276,
     262,  -276,   542,  -276,   542,   542,   236,  -276,  -276,  -276,
    -276,  -276
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,     0,   128,   108,    96,   100,   105,   102,   127,
     101,   107,   126,   109,    97,   110,   129,   111,   103,   106,
     104,    99,   205,     0,    84,    86,   112,    88,    90,     0,
     202,   204,     0,   121,     0,   144,    82,   132,     0,    92,
      94,   131,     0,    85,    87,    89,    91,     1,   203,   124,
       0,   122,     0,     0,   148,   146,   145,    83,     0,     0,
       0,   208,     0,   207,     0,   140,     0,   130,     0,   117,
       0,     0,   133,   149,   147,    93,    94,   180,     0,    30,
      31,    29,    28,    33,    32,     0,     0,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     8,     2,     3,     4,     5,     7,    10,    22,    34,
       0,    36,    40,    43,    46,    51,    54,    56,    58,    60,
      62,    64,    66,    79,     0,   184,   185,   171,   172,     0,
     182,   173,   174,   175,   176,     0,     6,   159,    95,   209,
     206,   140,   142,   141,   139,   156,   155,     0,   150,   152,
       0,    34,    81,   125,   119,   123,   118,     0,     0,   114,
     158,   116,     0,     0,    23,    24,   199,   200,     0,     0,
       0,     0,     0,     0,    26,   198,     0,     0,     0,     0,
       0,     0,     0,    16,    17,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    68,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,   181,   183,     0,     0,   162,     0,     0,     0,   167,
       0,    29,   143,     0,   154,   137,     0,   138,     0,   120,
       9,   113,   115,     0,     0,   201,     0,     0,     0,     0,
     197,     0,     0,   179,     0,     0,   177,     0,    12,     0,
      20,    14,    15,    67,    39,    37,    38,    41,    42,    44,
      45,    47,    48,    49,    50,    52,    53,    55,    57,    59,
      61,    63,     0,    80,     0,   170,   160,     0,   163,   166,
     168,     0,   136,   134,   151,   153,   157,     0,    35,     0,
     178,     0,     0,     0,    27,     0,     0,     0,    11,    13,
       0,     0,   169,   161,   164,     0,   135,     0,     0,     0,
       0,     0,   191,   188,     0,   190,    21,    65,   165,    18,
       0,   196,     0,   193,     0,     0,     0,    19,   195,   194,
     189,   192
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -276,  -276,  -276,  -276,  -276,   -58,  -276,  -108,    39,     5,
      31,    -8,    71,    69,    76,    80,    75,  -276,   -57,   -60,
    -276,    -2,   -87,   -33,    13,  -276,   235,  -276,   -61,   -48,
    -276,   242,   -62,    21,  -276,   -19,   256,   154,  -276,    10,
     276,  -276,  -276,    81,  -276,  -101,   -59,     9,  -275,  -276,
      82,   -74,  -276,    67,  -276,   189,  -131,  -276,  -276,  -276,
    -276,   268,  -276,  -276
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   106,   107,   108,   259,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     198,   124,   153,    22,    62,    38,    39,    24,    25,   160,
      26,    50,    51,    27,    28,    76,    41,   142,   233,    42,
     143,   147,   148,   149,   150,   162,   225,   226,   227,   228,
     229,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      29,    30,    31,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     137,   138,   199,   169,    40,    32,    34,    61,   155,   223,
     151,   152,   315,    23,    34,    53,    35,   159,    69,    35,
     154,   239,   156,   308,   178,    34,   125,   164,   165,   286,
      35,   139,   151,   152,   237,    49,   174,    43,    44,   248,
      45,    46,    23,   329,   240,    55,    57,   224,   303,    58,
      65,   305,   151,   289,    66,   315,    54,   217,    68,     3,
      70,   307,   244,    36,   157,    72,    74,   220,     9,   309,
     332,   287,   251,    12,   238,   137,   158,    73,   334,   146,
     336,   218,   232,    52,   220,   330,    54,   168,   220,    37,
      33,   220,   264,   265,   266,   155,   125,    37,   159,   161,
     159,   220,   159,   253,    49,    49,   256,    63,    37,   310,
     220,   241,   159,   242,     3,     3,   301,   302,   220,   166,
     220,   311,   260,     9,     9,   220,    60,   234,    12,    12,
     219,   140,   170,   220,   141,   298,   284,   247,   263,   203,
     204,   171,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     283,   158,    54,   172,    73,   151,   152,   137,   288,   249,
     291,   158,   300,   245,   252,   175,   220,   255,   176,   257,
     161,   177,   161,   181,   161,   151,   200,   182,   179,   201,
     202,   205,   206,   180,   161,   211,   212,   213,   223,   215,
     135,   313,    78,   275,   276,    79,    80,    81,   214,    82,
     269,   270,    83,   235,   216,    84,   282,   236,   243,   183,
     184,   185,   186,   207,   208,   209,   210,   137,   314,   322,
     246,   323,   250,   325,    85,    86,   224,   137,   271,   272,
     273,   274,   267,   268,   331,   261,   333,   254,   262,   146,
     326,   285,   292,   151,   327,   137,   328,   293,   338,   299,
     339,   340,   296,   304,   306,   223,    94,   135,   337,    78,
     137,   314,    79,    80,    81,   312,    82,   316,   335,    83,
     297,   341,    84,   278,   277,   136,   101,   102,   103,   104,
     105,   279,   281,    75,    71,   230,   280,    48,    67,   319,
     321,    85,    86,   224,   324,   223,   317,   135,     0,    78,
     290,    56,    79,    80,    81,     0,    82,   295,   222,    83,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,    85,    86,   224,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,    59,    77,    78,     0,     0,
      79,    80,    81,    94,    82,     0,     0,    83,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   101,   102,   103,   104,   105,     0,    85,
      86,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,    88,     5,    89,
       6,    90,     7,     8,     9,    10,    91,    11,    92,    12,
      93,    94,    13,    95,    96,    14,    15,    97,    16,     0,
      17,    98,    18,    99,    19,    20,     0,     0,    21,     0,
     100,   101,   102,   103,   104,   105,    59,   221,    78,     0,
       0,    79,    80,    81,     0,    82,     0,     0,    83,     0,
       0,    84,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,     0,     0,     0,     0,
      85,    86,   197,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,    88,     5,
      89,     6,    90,     7,     8,     9,    10,    91,    11,    92,
      12,    93,    94,    13,    95,    96,    14,    15,    97,    16,
       0,    17,    98,    18,    99,    19,    20,     0,     0,    21,
       0,   100,   101,   102,   103,   104,   105,    59,     0,    78,
       0,     0,    79,    80,    81,     0,    82,     0,   135,    83,
      78,     0,    84,    79,    80,    81,     0,    82,     0,     0,
      83,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     0,    87,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     0,     0,    88,
       0,    89,     0,    90,     0,     0,     0,     0,    91,     0,
      92,     0,    93,    94,     0,    95,    96,     0,     0,    97,
       0,     0,     0,    98,    94,    99,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,   136,   101,   102,   103,   104,   105,   297,
       0,    78,     0,     0,    79,    80,    81,     0,    82,     0,
       0,    83,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    79,    80,    81,
       0,    82,     0,     0,    83,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     0,    87,     0,   136,   101,   102,   103,   104,   105,
       1,     2,     3,     4,     0,     5,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,    94,    13,
       0,     0,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,     0,     0,    21,     0,   136,   101,   102,
     103,   104,   105,    78,     0,     0,    79,    80,    81,     0,
      82,     0,     0,    83,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     0,     0,     0,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,     0,    94,    13,     0,
       0,     0,    15,     0,     0,     0,    17,     0,    18,     0,
      19,    20,     0,     0,     0,     0,   136,   101,   102,   103,
     104,   105,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,    78,     0,    21,    79,    80,
      81,     0,    82,     0,     0,    83,    78,   258,    84,    79,
      80,    81,     0,    82,     0,     0,    83,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
       0,     0,     0,   167,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,   318,     0,    79,    80,    81,    94,
      82,     0,     0,    83,    78,     0,    84,    79,    80,    81,
      94,    82,     0,     0,    83,     0,     0,    84,   136,   101,
     102,   103,   104,   105,     0,    85,    86,     0,     0,   136,
     101,   102,   103,   104,   105,     0,    85,    86,     0,     0,
      78,   320,    87,    79,    80,    81,     0,    82,     0,     0,
      83,    78,     0,    84,    79,    80,    81,    94,    82,     0,
       0,    83,     0,     0,    84,     0,     0,     0,    94,     0,
       0,     0,    85,    86,     0,     0,   136,   101,   102,   103,
     104,   105,     0,    85,    86,     0,     0,   136,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,   163,     0,
       0,    79,    80,    81,    94,    82,     0,     0,    83,   173,
       0,    84,    79,    80,    81,    94,    82,     0,     0,    83,
       0,     0,    84,   136,   101,   102,   103,   104,   105,     0,
      85,    86,     0,     0,   136,   101,   102,   103,   104,   105,
       0,    85,    86,    78,     0,     0,    79,    80,   231,     0,
      82,     0,     0,    83,     0,     0,    84,     0,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,    85,    86,     0,     0,     0,
       0,   136,   101,   102,   103,   104,   105,     0,     0,     0,
      59,     0,   136,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   101,   102,   103,
     104,   105,    60,    59,     0,     0,     0,     0,     1,     2,
       3,     4,     0,     5,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,     0,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,     0,   144,    21,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
     294,     0,    21,     0,   145,     0,     0,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       0,     0,    21,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
       0,     0,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,     0,     0,    21,     2,
       3,     4,     0,     0,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,     0,     0,    13,     0,     0,
       0,    15,     0,     0,     0,    17,     0,    18,     0,    19,
      20
};

static const yytype_int16 yycheck[] =
{
      60,    60,   110,    90,    23,     5,     7,    40,    70,     3,
      68,    68,   287,     0,     7,    34,    12,    78,     6,    12,
       6,     6,     6,     4,    98,     7,    59,    85,    86,     6,
      12,    64,    90,    90,     8,    90,    94,    24,    25,   170,
      27,    28,    29,     6,     8,    35,    45,    41,     8,    48,
       3,     8,   110,    47,     7,   330,    35,    19,    47,    55,
      48,     8,   163,    45,    48,     8,    56,    48,    64,     8,
       8,    48,   173,    69,    48,   135,    78,    56,     8,    66,
       8,    43,   142,     5,    48,    48,    65,    89,    48,    90,
      90,    48,   200,   201,   202,   157,   129,    90,   159,    78,
     161,    48,   163,   177,    90,    90,   180,    40,    90,    48,
      48,   159,   173,   161,    55,    55,   247,   248,    48,    45,
      48,    44,   182,    64,    64,    48,    47,   146,    69,    69,
      45,    64,     7,    48,    75,   243,   223,   170,   198,    10,
      11,     7,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     220,   163,   141,    90,   143,   223,   223,   227,   227,   171,
     230,   173,   246,    45,   176,    45,    48,   179,     7,   181,
     159,    44,   161,     3,   163,   243,     9,     7,     7,    12,
      13,    21,    22,    44,   173,    27,    28,    14,     3,    15,
       5,     6,     7,   211,   212,    10,    11,    12,    16,    14,
     205,   206,    17,     8,    18,    20,   218,    48,     8,    39,
      40,    41,    42,    23,    24,    25,    26,   287,   287,   303,
      44,   305,    45,   307,    39,    40,    41,   297,   207,   208,
     209,   210,   203,   204,   318,    90,   320,    68,    90,   236,
     310,    90,     4,   311,   311,   315,   315,     4,   332,     8,
     334,   335,    90,     8,     7,     3,    71,     5,     6,     7,
     330,   330,    10,    11,    12,     4,    14,     4,    87,    17,
       5,    45,    20,   214,   213,    90,    91,    92,    93,    94,
      95,   215,   217,    58,    52,   141,   216,    29,    42,   301,
     302,    39,    40,    41,   306,     3,   297,     5,    -1,     7,
     228,    35,    10,    11,    12,    -1,    14,   236,   129,    17,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,
      10,    11,    12,    71,    14,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    39,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    -1,    -1,    88,    -1,
      90,    91,    92,    93,    94,    95,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    47,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    90,    91,    92,    93,    94,    95,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    -1,     5,    17,
       7,    -1,    20,    10,    11,    12,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,
      68,    -1,    70,    71,    -1,    73,    74,    -1,    -1,    77,
      -1,    -1,    -1,    81,    71,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,     5,
      -1,     7,    -1,    -1,    10,    11,    12,    -1,    14,    -1,
      -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    45,    -1,    90,    91,    92,    93,    94,    95,
      53,    54,    55,    56,    -1,    58,    -1,    60,    -1,    62,
      63,    64,    65,    -1,    67,    -1,    69,    -1,    71,    72,
      -1,    -1,    75,    76,    -1,    78,    -1,    80,    -1,    82,
      -1,    84,    85,    -1,    -1,    88,    -1,    90,    91,    92,
      93,    94,    95,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,     0,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    -1,    -1,    60,    -1,    62,    63,
      64,    65,    -1,    67,    -1,    69,    -1,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,
      84,    85,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    53,    54,    55,    56,    -1,    58,    -1,    60,
      -1,    62,    63,    64,    65,    -1,    67,    -1,    69,    -1,
      -1,    72,    -1,    -1,    75,    76,    -1,    78,    -1,    80,
      -1,    82,    -1,    84,    85,     7,    -1,    88,    10,    11,
      12,    -1,    14,    -1,    -1,    17,     7,     8,    20,    10,
      11,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    10,    11,    12,    71,
      14,    -1,    -1,    17,     7,    -1,    20,    10,    11,    12,
      71,    14,    -1,    -1,    17,    -1,    -1,    20,    90,    91,
      92,    93,    94,    95,    -1,    39,    40,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    39,    40,    -1,    -1,
       7,     8,    45,    10,    11,    12,    -1,    14,    -1,    -1,
      17,     7,    -1,    20,    10,    11,    12,    71,    14,    -1,
      -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    39,    40,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    39,    40,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    11,    12,    71,    14,    -1,    -1,    17,     7,
      -1,    20,    10,    11,    12,    71,    14,    -1,    -1,    17,
      -1,    -1,    20,    90,    91,    92,    93,    94,    95,    -1,
      39,    40,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    39,    40,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    39,    40,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
       5,    -1,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    47,     5,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    -1,    60,    -1,    62,    63,    64,
      65,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,
      75,    76,    -1,    78,    -1,    80,    -1,    82,    -1,    84,
      85,    -1,     8,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    -1,    60,    -1,
      62,    63,    64,    65,    -1,    67,    -1,    69,    -1,    -1,
      72,    -1,    -1,    75,    76,    -1,    78,    -1,    80,    -1,
      82,    -1,    84,    85,    -1,    -1,    88,    53,    54,    55,
      56,    -1,    58,    -1,    60,    -1,    62,    63,    64,    65,
      -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,    75,
      76,    -1,    78,    -1,    80,    -1,    82,    -1,    84,    85,
      46,    -1,    88,    -1,    90,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    -1,    60,    -1,    62,    63,    64,    65,
      -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,    75,
      76,    -1,    78,    -1,    80,    -1,    82,    -1,    84,    85,
      -1,    -1,    88,    53,    54,    55,    56,    -1,    58,    -1,
      60,    -1,    62,    63,    64,    65,    -1,    67,    -1,    69,
      -1,    -1,    72,    -1,    -1,    75,    76,    -1,    78,    -1,
      80,    -1,    82,    -1,    84,    85,    -1,    -1,    88,    54,
      55,    56,    -1,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,    84,
      85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,    55,    56,    58,    60,    62,    63,    64,
      65,    67,    69,    72,    75,    76,    78,    80,    82,    84,
      85,    88,   119,   120,   123,   124,   126,   129,   130,   156,
     157,   158,     5,    90,     7,    12,    45,    90,   121,   122,
     131,   132,   135,   120,   120,   120,   120,     0,   157,    90,
     127,   128,     5,   131,   129,   135,   136,    45,    48,     5,
      47,   119,   120,   149,   159,     3,     7,   132,    47,     6,
      48,   127,     8,   129,   135,   122,   131,     6,     7,    10,
      11,    12,    14,    17,    20,    39,    40,    45,    57,    59,
      61,    66,    68,    70,    71,    73,    74,    77,    81,    83,
      90,    91,    92,    93,    94,    95,    97,    98,    99,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   117,   119,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     5,    90,   115,   142,   119,
     149,    75,   133,   136,     8,    90,   120,   137,   138,   139,
     140,   101,   114,   118,     6,   128,     6,    48,   117,   124,
     125,   129,   141,     7,   101,   101,    45,    45,   117,   118,
       7,     7,    90,     7,   101,    45,     7,    44,   147,     7,
      44,     3,     7,    39,    40,    41,    42,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    47,   116,   103,
       9,    12,    13,    10,    11,    21,    22,    23,    24,    25,
      26,    27,    28,    14,    16,    15,    18,    19,    43,    45,
      48,     6,   151,     3,    41,   142,   143,   144,   145,   146,
     133,    12,   115,   134,   131,     8,    48,     8,    48,     6,
       8,   125,   125,     8,   141,    45,    44,   119,   152,   117,
      45,   141,   117,   147,    68,   117,   147,   117,     8,   100,
     115,    90,    90,   115,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   109,   110,
     111,   112,   117,   115,   118,    90,     6,    48,   142,    47,
     146,   115,     4,     4,    46,   139,    90,     5,   103,     8,
     147,   152,   152,     8,     8,     8,     7,     8,     4,     8,
      48,    44,     4,     6,   142,   144,     4,   143,     8,   117,
       8,   117,   147,   147,   117,   147,   115,   114,   142,     6,
      48,   147,     8,   147,     8,    87,     8,     6,   147,   147,
     147,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    98,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   125,   126,   126,   126,
     126,   126,   127,   127,   128,   128,   129,   129,   129,   130,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   142,
     142,   142,   143,   143,   143,   143,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     153,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     4,     5,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     5,     6,     5,     4,     4,     3,
       0,     1,     0,     1,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     1,     2,     3,     4,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     1,     1,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     7,     6,     3,     2,     2,
       2,     3,     1,     2,     1,     1,     4,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 57 "assgn4_17CS10035.y" /* yacc.c:1646  */
    { printf("PRIMARY_EXPRESSION\n");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 58 "assgn4_17CS10035.y" /* yacc.c:1646  */
    { printf("PRIMARY_EXPRESSION\n");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "assgn4_17CS10035.y" /* yacc.c:1646  */
    { printf("PRIMARY_EXPRESSION\n");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "assgn4_17CS10035.y" /* yacc.c:1646  */
    { printf("PRIMARY_EXPRESSION\n");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POSTFIX_EXPRESSION\n");}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ARGUMENT EXPRESSION LIST\n");}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 80 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ARGUMENT EXPRESSION LIST\n");}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY EXPRESSION\n");}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 85 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY EXPRESSION\n");}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY EXPRESSION\n");}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY EXPRESSION\n");}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY EXPRESSION\n");}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 90 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY EXPRESSION\n");}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 94 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY OPERATOR\n");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 95 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY OPERATOR\n");}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY OPERATOR\n");}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY OPERATOR\n");}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY OPERATOR\n");}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("UNARY OPERATOR\n");}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("CAST EXPRESSION\n");}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("CAST EXPRESSION\n");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVE EXPRESSION\n");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVE EXPRESSION\n");}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 112 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVE EXPRESSION\n");}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 114 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("MULTIPLICATIVE EXPRESSION\n");}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 118 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ADDITIVE EXPRESSION\n");}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 119 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ADDITIVE EXPRESSION\n");}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 121 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ADDITIVE EXPRESSION\n");}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SHIFT EXPRESSION\n");}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 126 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SHIFT EXPRESSION\n");}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 128 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SHIFT EXPRESSION\n");}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 132 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("RELATIONAL EXPRESSION\n");}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 133 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("RELATIONAL EXPRESSION\n");}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 134 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("RELATIONAL EXPRESSION\n");}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("RELATIONAL EXPRESSION\n");}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 137 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("RELATIONAL EXPRESSION\n");}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EQUALITY EXPRESSION\n");}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EQUALITY EXPRESSION\n");}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 144 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EQUALITY EXPRESSION\n");}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 148 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("AND_expression\n");}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 150 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("AND_expression\n");}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 154 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXCLUSIVE OR EXPRESSION \n");}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 156 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXCLUSIVE OR EXPRESSION \n");}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INCLUSIVE OR EXPRESSION\n");}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 162 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INCLUSIVE OR EXPRESSION\n");}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 166 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LOGICAL AND EXPRESSION\n");}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LOGICAL AND EXPRESSION\n");}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 172 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LOGICAL OR EXPRESSION \n");}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 174 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LOGICAL OR EXPRESSION \n");}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 178 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("CONDITIONAL EXPRESSION\n");}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 180 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("CONDITIONAL EXPRESSION\n");}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 184 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT EXPRESSION\n");}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 186 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT EXPRESSION\n");}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 190 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 191 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 192 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 193 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 194 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 195 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 197 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 198 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 199 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 201 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT OPERATOR\n");}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 205 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXPRESSION\n");}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 207 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXPRESSION\n");}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 212 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("CONSTANT EXPRESSION\n");}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 217 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION\n");}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 219 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION\n");}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 223 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 224 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 225 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 226 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 227 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 228 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 229 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 231 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION SPECIFIERS\n");}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 235 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INIT DECLARATOR LIST\n");}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 237 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INIT DECLARATOR LIST\n");}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 241 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INIT DECLARATOR\n");}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 243 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INIT DECLARATOR\n");}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 247 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STORAGE CLASS SPECIFIER\n");}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 248 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STORAGE CLASS SPECIFIER\n");}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 249 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STORAGE CLASS SPECIFIER\n");}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 251 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STORAGE CLASS SPECIFIER\n");}
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 255 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 256 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 257 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 258 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 259 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 260 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 261 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 262 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 263 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 264 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 265 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 266 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 268 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE SPECIFIER\n");}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 272 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SPECIFIER_QUALIFIER_LIST\n");}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 273 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SPECIFIER_QUALIFIER_LIST\n");}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 274 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SPECIFIER_QUALIFIER_LIST\n");}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 276 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SPECIFIER_QUALIFIER_LIST\n");}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 281 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUM_SPECIFIER\n");}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 282 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUM_SPECIFIER\n");}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 283 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUM_SPECIFIER\n");}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 284 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUM_SPECIFIER\n");}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 286 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUM_SPECIFIER\n");}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 290 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUMERATOR_LIST\n");}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 292 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUMERATOR_LIST\n");}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 296 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUMERATOR\n");}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 298 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ENUMERATOR\n");}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 302 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE QUAIFIER \n");}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 303 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE QUAIFIER \n");}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 305 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE QUAIFIER \n");}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 310 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("FUNCTION SPECIFIER\n");}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 315 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATOR\n");}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 317 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATOR\n");}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 322 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 323 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 324 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 325 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 326 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 327 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 329 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DIRECT_DECLARATOR\n");}
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 333 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT EXPRESSION OPT\n");}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 335 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE QUALIFIER LIST OPT\n");}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 339 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT EXPRESSION OPT\n");}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 341 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ASSIGNMENT EXPRESSION OPT\n");}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 345 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POINTER\n");}
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 346 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POINTER\n");}
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 347 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POINTER\n");}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 349 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("POINTER\n");}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 353 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE QUALIFIER LIST\n");}
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 355 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE QUALIFIER LIST\n");}
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 359 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("PARAMETER TYPE LIST\n");}
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 361 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("PARAMETER TYPE LIST\n");}
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 365 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("PARAMETER LIST\n");}
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 367 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("PARAMETER LIST\n");}
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 371 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("PARAMETER DECLARATION\n");}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 373 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("PARAMETER DECLARATION\n");}
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 377 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("IDENTIFIER LIST\n");}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 379 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("IDENTIFIER LIST\n");}
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 384 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TYPE NAME\n");}
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 388 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER\n");}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 389 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER\n");}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 391 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER\n");}
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 395 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER LIST\n");}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 396 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER LIST\n");}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 397 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER LIST\n");}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 399 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("INITIALIZER LIST\n");}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 404 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DESIGNATION\n");}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 408 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DESIGNATOR LIST\n");}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 410 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DESIGNATOR LIST\n");}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 414 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DESIGNATOR\n");}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 416 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DESIGNATOR\n");}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 420 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STATEMENT\n");}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 421 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STATEMENT\n");}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STATEMENT\n");}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 423 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STATEMENT\n");}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 424 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STATEMENT\n");}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 426 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("STATEMENT\n");}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 430 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LABELED STATMENT\n");}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 431 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LABELED STATMENT\n");}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 433 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("LABELED STATMENT\n");}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 437 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("COMPOUND STATEMENT\n");}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 439 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("COMPOUND STATEMENT\n");}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 443 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("BLOCK ITEM LIST\n");}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("BLOCK ITEM LIST\n");}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 449 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("BLOCK ITEM\n");}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 451 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("BLOCK ITEM\n");}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 455 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXPRESSION STATEMENT\n");}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 457 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXPRESSION STATEMENT\n");}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 461 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SELECTION STATEMENT\n");}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 462 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SELECTION STATEMENT\n");}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 464 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("SELECTION STATEMENT\n");}
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 468 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ITERATION STATEMENT\n");}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 469 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ITERATION STATEMENT\n");}
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 470 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ITERATION STATEMENT\n");}
#line 3012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 471 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ITERATION STATEMENT\n");}
#line 3018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 472 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ITERATION STATEMENT\n");}
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 474 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("ITERATION STATEMENT\n");}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 478 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("JUMP STATEMENT\n");}
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 479 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("JUMP STATEMENT\n");}
#line 3042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 480 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("JUMP STATEMENT\n");}
#line 3048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 481 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("JUMP STATEMENT\n");}
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 483 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("JUMP STATEMENT\n");}
#line 3060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 493 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TRANSLATION UNIT\n");}
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 495 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("TRANSLATION UNIT\n");}
#line 3072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 499 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXTERNAL DECLARATION\n");}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 501 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("EXTERNAL DECLARATION\n");}
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 505 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("FUNCTION DEFINITION\n");}
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 507 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("FUNCTION DEFINITION\n");}
#line 3096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 511 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION LIST\n");}
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 513 "assgn4_17CS10035.y" /* yacc.c:1646  */
    {printf("DECLARATION LIST\n");}
#line 3108 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3112 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 516 "assgn4_17CS10035.y" /* yacc.c:1906  */


void yyerror(char *s) {
	printf ("ERROR IS : %s",s);
}
