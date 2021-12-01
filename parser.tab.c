/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     HOWDY_PARTNER = 258,
     SO_LONG_PARTNER = 259,
     SEMI = 260,
     COMMA = 261,
     DOT = 262,
     ID = 263,
     INT = 264,
     FLOAT = 265,
     CHAR = 266,
     NUTHIN = 267,
     STRUCT = 268,
     FUNC = 269,
     RETURN = 270,
     BOOL = 271,
     ADDITION = 272,
     SUBTRACTION = 273,
     MULTIPLICATION = 274,
     DIVISION = 275,
     MOD = 276,
     LPAREN = 277,
     RPAREN = 278,
     INTNUM = 279,
     FLOATNUM = 280,
     CHARLITERAL = 281,
     STRINGLITERAL = 282,
     BOOLVAL = 283,
     NULLVAL = 284,
     NOT = 285,
     GETS = 286,
     PUTS = 287,
     PUTSLN = 288,
     ASSIGNMENT_OPERATOR = 289,
     LBRACKET = 290,
     RBRACKET = 291,
     LBRACE = 292,
     RBRACE = 293,
     NUMBER = 294,
     AND = 295,
     OR = 296,
     EQUALS = 297,
     NOT_EQUALS = 298,
     LESS_THAN = 299,
     GREATER_THAN = 300,
     LESS_EQUAL = 301,
     GREATER_EQUAL = 302,
     SELECTION_IF = 303,
     SELECTION_ELSE = 304,
     LOOP_FOR = 305,
     LOOP_DOWHILE = 306,
     LOOP_WHILE = 307
   };
#endif
/* Tokens.  */
#define HOWDY_PARTNER 258
#define SO_LONG_PARTNER 259
#define SEMI 260
#define COMMA 261
#define DOT 262
#define ID 263
#define INT 264
#define FLOAT 265
#define CHAR 266
#define NUTHIN 267
#define STRUCT 268
#define FUNC 269
#define RETURN 270
#define BOOL 271
#define ADDITION 272
#define SUBTRACTION 273
#define MULTIPLICATION 274
#define DIVISION 275
#define MOD 276
#define LPAREN 277
#define RPAREN 278
#define INTNUM 279
#define FLOATNUM 280
#define CHARLITERAL 281
#define STRINGLITERAL 282
#define BOOLVAL 283
#define NULLVAL 284
#define NOT 285
#define GETS 286
#define PUTS 287
#define PUTSLN 288
#define ASSIGNMENT_OPERATOR 289
#define LBRACKET 290
#define RBRACKET 291
#define LBRACE 292
#define RBRACE 293
#define NUMBER 294
#define AND 295
#define OR 296
#define EQUALS 297
#define NOT_EQUALS 298
#define LESS_THAN 299
#define GREATER_THAN 300
#define LESS_EQUAL 301
#define GREATER_EQUAL 302
#define SELECTION_IF 303
#define SELECTION_ELSE 304
#define LOOP_FOR 305
#define LOOP_DOWHILE 306
#define LOOP_WHILE 307




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include<stdio.h>
#include<string.h>
extern int yylex(void);
extern int line_number;
void yyerror(char *s);

#include "symbolTable.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "parser.y"
{
  int ival;
  float fval;
  char cval;
  char * sval;
}
/* Line 193 of yacc.c.  */
#line 217 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 230 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   603

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  234
/* YYNRULES -- Number of states.  */
#define YYNSTATES  401

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    18,    20,    23,
      25,    28,    31,    33,    36,    38,    41,    44,    47,    50,
      53,    57,    61,    65,    69,    73,    77,    81,    85,    89,
      93,    97,   101,   105,   109,   113,   117,   121,   125,   129,
     133,   137,   141,   145,   149,   153,   157,   161,   165,   169,
     173,   177,   181,   185,   189,   193,   197,   201,   205,   209,
     213,   217,   221,   225,   229,   233,   235,   237,   239,   241,
     243,   247,   251,   255,   259,   263,   267,   271,   275,   279,
     283,   287,   291,   295,   299,   303,   307,   311,   315,   319,
     323,   327,   331,   335,   339,   343,   347,   351,   355,   359,
     363,   367,   371,   375,   379,   383,   387,   391,   395,   399,
     403,   407,   411,   415,   419,   423,   427,   431,   435,   439,
     443,   447,   451,   455,   459,   463,   467,   471,   475,   479,
     483,   485,   487,   489,   491,   493,   495,   497,   499,   501,
     504,   512,   520,   526,   532,   538,   544,   552,   564,   566,
     568,   570,   573,   576,   579,   582,   585,   588,   591,   594,
     597,   607,   617,   627,   637,   647,   649,   653,   654,   657,
     660,   663,   666,   671,   673,   677,   678,   680,   682,   684,
     686,   688,   694,   697,   701,   702,   705,   708,   711,   714,
     718,   720,   722,   724,   736,   738,   739,   741,   742,   746,
     747,   755,   764,   768,   772,   776,   780,   784,   790,   797,
     801,   805,   811,   817,   823,   829,   835,   843,   852,   858,
     864,   871,   878,   885,   892,   899,   908,   918,   925,   932,
     938,   944,   950,   956,   958
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,     3,    56,     4,    -1,    57,     5,    -1,
      63,     5,    -1,    72,    -1,    73,     5,    -1,    77,    -1,
      80,     5,    -1,    83,    -1,    86,     5,    -1,    94,     5,
      -1,    87,    -1,    95,     5,    -1,    55,    -1,    56,    55,
      -1,     9,     8,    -1,    10,     8,    -1,    11,     8,    -1,
      16,     8,    -1,     8,    17,     8,    -1,     8,    17,    24,
      -1,     8,    17,    25,    -1,    24,    17,     8,    -1,    24,
      17,    24,    -1,    24,    17,    25,    -1,    25,    17,     8,
      -1,    25,    17,    24,    -1,    25,    17,    25,    -1,     8,
      18,     8,    -1,     8,    18,    24,    -1,     8,    18,    25,
      -1,    24,    18,     8,    -1,    24,    18,    24,    -1,    24,
      18,    25,    -1,    25,    18,     8,    -1,    25,    18,    24,
      -1,    25,    18,    25,    -1,     8,    19,     8,    -1,     8,
      19,    24,    -1,     8,    19,    25,    -1,    24,    19,     8,
      -1,    24,    19,    24,    -1,    24,    19,    25,    -1,    25,
      19,     8,    -1,    25,    19,    24,    -1,    25,    19,    25,
      -1,     8,    20,     8,    -1,     8,    20,    24,    -1,     8,
      20,    25,    -1,    24,    20,     8,    -1,    24,    20,    24,
      -1,    24,    20,    25,    -1,    25,    20,     8,    -1,    25,
      20,    24,    -1,    25,    20,    25,    -1,     8,    21,     8,
      -1,     8,    21,    24,    -1,     8,    21,    25,    -1,    24,
      21,     8,    -1,    24,    21,    24,    -1,    24,    21,    25,
      -1,    25,    21,     8,    -1,    25,    21,    24,    -1,    25,
      21,    25,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,     8,    42,     8,    -1,     8,    42,    24,
      -1,     8,    42,    25,    -1,     8,    42,    28,    -1,    24,
      42,     8,    -1,    24,    42,    24,    -1,    24,    42,    25,
      -1,    25,    42,     8,    -1,    25,    42,    24,    -1,    25,
      42,    25,    -1,    28,    42,    28,    -1,    28,    42,     8,
      -1,     8,    43,     8,    -1,     8,    43,    24,    -1,     8,
      43,    25,    -1,     8,    43,    28,    -1,    24,    43,     8,
      -1,    24,    43,    24,    -1,    24,    43,    25,    -1,    25,
      43,     8,    -1,    25,    43,    24,    -1,    25,    43,    25,
      -1,    28,    43,    28,    -1,    28,    43,     8,    -1,     8,
      44,     8,    -1,     8,    44,    24,    -1,     8,    44,    25,
      -1,    24,    44,     8,    -1,    24,    44,    24,    -1,    24,
      44,    25,    -1,    25,    44,     8,    -1,    25,    44,    24,
      -1,    25,    44,    25,    -1,     8,    45,     8,    -1,     8,
      45,    24,    -1,     8,    45,    25,    -1,    24,    45,     8,
      -1,    24,    45,    24,    -1,    24,    45,    25,    -1,    25,
      45,     8,    -1,    25,    45,    24,    -1,    25,    45,    25,
      -1,     8,    46,     8,    -1,     8,    46,    24,    -1,     8,
      46,    25,    -1,    24,    46,     8,    -1,    24,    46,    24,
      -1,    24,    46,    25,    -1,    25,    46,     8,    -1,    25,
      46,    24,    -1,    25,    46,    25,    -1,     8,    47,     8,
      -1,     8,    47,    24,    -1,     8,    47,    25,    -1,    24,
      47,     8,    -1,    24,    47,    24,    -1,    24,    47,    25,
      -1,    25,    47,     8,    -1,    25,    47,    24,    -1,    25,
      47,    25,    -1,    64,    -1,    65,    -1,    66,    -1,    67,
      -1,    68,    -1,    69,    -1,     8,    -1,    28,    -1,    70,
      -1,    30,    70,    -1,    22,    70,    23,    40,    22,    70,
      23,    -1,    22,    70,    23,    41,    22,    70,    23,    -1,
      71,    40,    22,    70,    23,    -1,    71,    41,    22,    70,
      23,    -1,    22,    70,    23,    40,    71,    -1,    22,    70,
      23,    41,    71,    -1,    48,    22,    71,    23,    37,    56,
      38,    -1,    48,    22,    71,    23,    37,    56,    38,    49,
      37,    56,    38,    -1,    74,    -1,    75,    -1,    76,    -1,
      31,     8,    -1,    32,     8,    -1,    32,    26,    -1,    32,
      24,    -1,    32,    25,    -1,    33,     8,    -1,    33,    26,
      -1,    33,    24,    -1,    33,    25,    -1,    14,     8,    22,
      78,    23,     9,    37,    56,    38,    -1,    14,     8,    22,
      78,    23,    10,    37,    56,    38,    -1,    14,     8,    22,
      78,    23,    11,    37,    56,    38,    -1,    14,     8,    22,
      78,    23,    12,    37,    56,    38,    -1,    14,     8,    22,
      78,    23,    16,    37,    56,    38,    -1,    79,    -1,    79,
       6,    78,    -1,    -1,     9,     8,    -1,    11,     8,    -1,
      10,     8,    -1,    16,     8,    -1,     8,    22,    81,    23,
      -1,    82,    -1,    82,     6,    81,    -1,    -1,     8,    -1,
      24,    -1,    26,    -1,    25,    -1,    28,    -1,    13,     8,
      37,    84,    38,    -1,    85,     5,    -1,    85,     5,    84,
      -1,    -1,     9,     8,    -1,    11,     8,    -1,    10,     8,
      -1,    16,     8,    -1,     8,     7,     8,    -1,    88,    -1,
      92,    -1,    93,    -1,    50,    22,    89,     5,    90,     5,
      91,    23,    37,    56,    38,    -1,    94,    -1,    -1,    70,
      -1,    -1,     8,    34,    63,    -1,    -1,    52,    22,    71,
      23,    38,    56,    37,    -1,    51,    37,    56,    38,    52,
      22,    71,    23,    -1,     8,    34,     8,    -1,     8,    34,
      25,    -1,     8,    34,    24,    -1,     8,    34,    80,    -1,
       8,    34,    63,    -1,     8,    34,     8,     7,     8,    -1,
       8,    34,     8,    35,    96,    36,    -1,     8,    34,    28,
      -1,     8,    34,    26,    -1,     8,     7,     8,    34,     8,
      -1,     8,     7,     8,    34,    25,    -1,     8,     7,     8,
      34,    24,    -1,     8,     7,     8,    34,    80,    -1,     8,
       7,     8,    34,    63,    -1,     8,     7,     8,    34,     8,
       7,     8,    -1,     8,     7,     8,    34,     8,    35,    96,
      36,    -1,     8,     7,     8,    34,    28,    -1,     8,     7,
       8,    34,    26,    -1,     8,    35,    96,    36,    34,     8,
      -1,     8,    35,    96,    36,    34,    25,    -1,     8,    35,
      96,    36,    34,    24,    -1,     8,    35,    96,    36,    34,
      80,    -1,     8,    35,    96,    36,    34,    63,    -1,     8,
      35,    96,    36,    34,     8,     7,     8,    -1,     8,    35,
      96,    36,    34,     8,    35,    96,    36,    -1,     8,    35,
      96,    36,    34,    28,    -1,     8,    35,    96,    36,    34,
      26,    -1,     9,     8,    35,    24,    36,    -1,    10,     8,
      35,    24,    36,    -1,    11,     8,    35,    24,    36,    -1,
      16,     8,    35,    24,    36,    -1,    24,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    52,    53,    56,    57,    58,    59,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   117,   118,   119,   120,   121,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     196,   197,   198,   199,   200,   201,   202,   203,   206,   207,
     208,   209,   210,   211,   212,   213,   216,   217,   220,   221,
     222,   225,   228,   229,   230,   231,   234,   235,   236,   237,
     240,   241,   242,   243,   244,   247,   248,   249,   252,   253,
     254,   255,   258,   261,   262,   263,   266,   267,   268,   269,
     270,   273,   276,   277,   278,   281,   282,   283,   284,   287,
     290,   291,   292,   295,   298,   299,   302,   303,   306,   307,
     310,   313,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   346,
     347,   348,   349,   352,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HOWDY_PARTNER", "SO_LONG_PARTNER",
  "SEMI", "COMMA", "DOT", "ID", "INT", "FLOAT", "CHAR", "NUTHIN", "STRUCT",
  "FUNC", "RETURN", "BOOL", "ADDITION", "SUBTRACTION", "MULTIPLICATION",
  "DIVISION", "MOD", "LPAREN", "RPAREN", "INTNUM", "FLOATNUM",
  "CHARLITERAL", "STRINGLITERAL", "BOOLVAL", "NULLVAL", "NOT", "GETS",
  "PUTS", "PUTSLN", "ASSIGNMENT_OPERATOR", "LBRACKET", "RBRACKET",
  "LBRACE", "RBRACE", "NUMBER", "AND", "OR", "EQUALS", "NOT_EQUALS",
  "LESS_THAN", "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL",
  "SELECTION_IF", "SELECTION_ELSE", "LOOP_FOR", "LOOP_DOWHILE",
  "LOOP_WHILE", "$accept", "program", "statement", "statement_list",
  "declaration_statement", "sum_operation", "sub_operation",
  "mult_operation", "div_operation", "mod_operation",
  "arithmetic_operation", "equality_expression", "inequality_expression",
  "lessthan_expression", "greaterthan_expression", "lessequal_expression",
  "greaterequal_expression", "conditional_expression",
  "compound_conditional", "selection_statement", "std_in_out_statement",
  "stdin_func", "stdout_func", "stdout_ln_func", "function_declaration",
  "func_declaration_list", "func_param_declaration", "function_call",
  "parameter_list", "func_call_param", "struct_definition",
  "struct_declaration_list", "struct_declaration",
  "struct_member_reference", "iteration_statment", "for_loop",
  "optional_assignment", "optional_conditional", "optional_increment",
  "while_loop", "dowhile_loop", "assignment_statement", "array_definition",
  "array_index", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    74,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    80,    81,    81,    81,    82,    82,    82,    82,
      82,    83,    84,    84,    84,    85,    85,    85,    85,    86,
      87,    87,    87,    88,    89,    89,    90,    90,    91,    91,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       7,     7,     5,     5,     5,     5,     7,    11,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       9,     9,     9,     9,     9,     1,     3,     0,     2,     2,
       2,     2,     4,     1,     3,     0,     1,     1,     1,     1,
       1,     5,     2,     3,     0,     2,     2,     2,     2,     3,
       1,     1,     1,    11,     1,     0,     1,     0,     3,     0,
       7,     8,     3,     3,     3,     3,     3,     5,     6,     3,
       3,     5,     5,     5,     5,     5,     7,     8,     5,     5,
       6,     6,     6,     6,     6,     8,     9,     6,     6,     5,
       5,     5,     5,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,    65,    66,    67,    68,    69,     0,     5,     0,
     148,   149,   150,     7,     0,     9,     0,    12,   190,   191,
     192,     0,     0,     1,     0,     0,     0,     0,     0,     0,
     175,     0,     0,    16,    17,    18,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
     152,   154,   155,   153,   156,   158,   159,   157,     0,   195,
       0,     0,     2,    15,     3,     4,     6,     8,    10,    11,
      13,   189,    20,    21,    22,    29,    30,    31,    38,    39,
      40,    47,    48,    49,    56,    57,    58,   176,   177,   179,
     178,   180,     0,   173,   202,   204,   203,   210,   209,   206,
     205,   234,   233,     0,     0,     0,     0,   184,   167,     0,
      23,    24,    25,    32,    33,    34,    41,    42,    43,    50,
      51,    52,    59,    60,    61,    26,    27,    28,    35,    36,
      37,    44,    45,    46,    53,    54,    55,    62,    63,    64,
     136,     0,     0,     0,   137,     0,   130,   131,   132,   133,
     134,   135,   138,     0,     0,     0,   194,     0,     0,     0,
     172,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,   197,     0,     0,
     211,   213,   212,   219,   218,   215,   214,   174,   207,     0,
       0,   229,   230,   231,   185,   187,   186,   188,   181,   182,
     168,   170,   169,   171,     0,   167,   232,    70,    71,    72,
      73,    82,    83,    84,    85,    94,    95,    96,   103,   104,
     105,   112,   113,   114,   121,   122,   123,     0,    74,    75,
      76,    86,    87,    88,    97,    98,    99,   106,   107,   108,
     115,   116,   117,   124,   125,   126,    77,    78,    79,    89,
      90,    91,   100,   101,   102,   109,   110,   111,   118,   119,
     120,   127,   128,   129,    81,    80,    93,    92,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,   208,   220,
     222,   221,   228,   227,   224,   223,   183,     0,     0,     0,
       0,     0,   166,     0,     0,     0,     0,     0,   199,     0,
       0,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,   145,   146,   142,   143,     0,     0,     0,
     200,   217,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   226,   160,   161,   162,   163,
     164,   140,   141,     0,     0,   198,     0,     0,     0,   147,
     193
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   166,   167,   168,   169,   170,   171,   172,   173,    28,
      29,    30,    31,    32,    33,   198,   199,    34,   112,   113,
      35,   192,   193,    36,    37,    38,   175,   323,   368,    39,
      40,    41,    42,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
      35,   451,    40,   117,    45,    71,    83,    99,   102,   114,
     572,   577,   115,    37,    68,    26,    76,    88,   118,  -178,
       4,   136,  -178,  -178,  -178,  -178,  -178,   139,  -178,   143,
    -178,  -178,  -178,  -178,   169,  -178,   176,  -178,  -178,  -178,
    -178,   180,   191,  -178,   141,   134,   159,   174,   204,   289,
     193,   218,     1,   165,   185,   187,   178,   201,   192,   323,
     325,   335,   362,   368,   387,   393,   399,   418,   424,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,     2,   222,
     451,     2,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,   205,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,   226,   250,   282,   572,   577,  -178,  -178,  -178,
    -178,  -178,  -178,   223,   234,   236,   240,   144,   225,   251,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
     529,    62,   535,   541,   -21,    62,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,    -7,    16,   277,  -178,    33,    59,   229,
    -178,   193,   275,     1,   252,   254,   258,   259,   279,   280,
     288,   297,   268,   302,   301,   308,   312,   320,   317,   328,
     305,    93,   311,   430,   449,   455,   461,   319,   473,   492,
     496,   504,   506,   510,   514,   517,   519,   524,   528,   532,
       3,    11,  -178,   315,   331,   340,   365,    62,   327,   337,
     470,   572,   577,  -178,  -178,  -178,  -178,  -178,  -178,   344,
     237,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   144,
    -178,  -178,  -178,  -178,   554,   225,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,    19,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   451,    62,
      62,   205,  -178,   376,   363,   451,   380,     1,  -178,   489,
     572,   577,  -178,  -178,  -178,  -178,  -178,   347,   357,   367,
     378,   379,  -178,   148,   167,    64,   396,   402,   427,     2,
      95,  -178,   410,   439,     1,   451,   451,   451,   451,   451,
      62,    27,    62,    27,   401,  -178,  -178,   422,   443,    90,
    -178,  -178,  -178,   442,   155,   200,   260,   313,   358,   471,
     472,   456,   537,   476,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,    19,    19,   451,   582,  -178,   451,   389,   420,  -178,
    -178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,   -20,   -78,  -178,  -178,  -178,  -178,  -178,  -178,
     -50,  -178,  -178,  -178,  -178,  -178,  -178,  -158,   -77,  -178,
    -178,  -178,  -178,  -178,  -178,   264,  -178,   -46,   334,  -178,
    -178,   274,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,   447,  -178,  -177
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      83,   119,   177,   207,   178,   120,   239,   222,    82,   121,
     160,   314,     3,     4,     5,     6,   223,     7,     8,   316,
       9,   220,   221,   226,   161,   122,   162,   163,    10,    11,
     164,   315,   165,   224,   225,    12,    13,    14,     1,   317,
      43,     3,     4,     5,     6,    70,     7,     8,    78,     9,
      51,    52,    15,    53,    16,    17,    18,    10,    11,   343,
     344,    71,    72,    73,    12,    13,    14,   224,   225,   322,
     160,   228,     3,     4,     5,     6,    74,     7,     8,    54,
       9,    15,   229,    16,    17,    18,   162,   163,    10,    11,
     164,    55,    75,    76,    77,    12,    13,    14,    79,   224,
     225,   257,   364,     3,     4,     5,     6,    56,     7,     8,
      57,     9,    15,   384,    16,    17,    18,   258,   259,    10,
      11,   260,    58,    69,    44,    80,    12,    13,    14,   235,
     224,   225,   370,   236,    45,    46,    47,    48,    49,    50,
      81,    84,    92,    15,    85,    16,    17,    18,    86,    91,
     352,    51,    52,   188,   189,   190,   160,    83,    93,    94,
     191,   346,   347,     3,     4,     5,     6,    95,     7,     8,
     360,     9,   162,   163,    87,   160,   164,   373,   165,    10,
      11,    88,    98,    96,    97,    89,    12,    13,    14,   362,
     334,   162,   163,   386,   335,   164,    90,   165,    99,   100,
     124,   107,   379,    15,   380,    16,    17,    18,     3,     4,
       5,     6,   101,     7,     8,   127,     9,   108,   109,   110,
     125,   111,   126,   128,    10,    11,   114,   129,   102,   103,
     174,    12,    13,    14,   194,   195,   196,   230,   387,   179,
     345,   197,   115,   116,   117,   329,   118,   350,    15,   180,
      16,    17,    18,   231,   232,   233,   181,   234,   185,   184,
     186,   330,   331,   332,   187,   333,   361,   363,     3,     4,
       5,     6,   369,     7,     8,   200,     9,   374,   375,   376,
     377,   378,   227,   238,    10,    11,   240,   244,   245,   182,
     241,    12,    13,    14,   242,   243,   246,   104,   388,    45,
      46,    47,    48,    49,    50,   247,   248,   249,    15,   250,
      16,    17,    18,   105,   106,   397,   251,   183,   398,   261,
     252,     3,     4,     5,     6,    83,     7,     8,   253,     9,
      83,   130,   395,   133,   255,   262,   263,    10,    11,   264,
     254,   256,   277,   136,    12,    13,    14,   131,   132,   134,
     135,   389,   318,   319,    83,    83,    83,    83,    83,   137,
     138,    15,   320,    16,    17,    18,     3,     4,     5,     6,
     139,     7,     8,   321,     9,   325,   142,    83,    83,   324,
     328,   348,    10,    11,   355,   349,   140,   141,   351,    12,
      13,    14,   143,   144,   356,   145,   390,     3,     4,     5,
       6,   148,     7,     8,   357,     9,    15,   151,    16,    17,
      18,   146,   147,    10,    11,   358,   359,   149,   150,   365,
      12,    13,    14,   152,   153,   366,   154,   399,     3,     4,
       5,     6,   157,     7,     8,   367,     9,    15,   265,    16,
      17,    18,   155,   156,    10,    11,   371,   372,   158,   159,
     381,    12,    13,    14,   266,   267,   382,   268,   400,     3,
       4,     5,     6,   271,     7,     8,   383,     9,    15,   274,
      16,    17,    18,   269,   270,    10,    11,   326,   385,   272,
     273,   278,    12,    13,    14,   275,   276,    45,    46,    47,
      48,    49,    50,   393,   391,   392,   353,   279,   280,    15,
     281,    16,    17,    18,   284,   327,    45,    46,    47,    48,
      49,    50,   287,   396,   290,   237,   282,   283,   293,   342,
     285,   286,   296,   336,   354,   299,   176,   302,   288,   289,
     291,   292,   305,     0,   294,   295,   308,     0,   297,   298,
     311,   300,   301,   303,   304,   394,     0,     0,   306,   307,
       0,     0,   309,   310,     0,     0,   312,   313,     0,     0,
       0,    10,    11,   337,   338,   339,   340,     0,     0,     0,
     341,   201,   202,   203,   204,   205,   206,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    45,
      46,    47,    48,    49
};

static const yytype_int16 yycheck[] =
{
      20,    51,    80,   161,    81,    51,   183,   165,     4,     8,
       8,     8,     8,     9,    10,    11,    23,    13,    14,     8,
      16,    42,    43,     7,    22,    24,    24,    25,    24,    25,
      28,    28,    30,    40,    41,    31,    32,    33,     3,    28,
       0,     8,     9,    10,    11,     8,    13,    14,    22,    16,
      34,    35,    48,     8,    50,    51,    52,    24,    25,    40,
      41,    24,    25,    26,    31,    32,    33,    40,    41,   227,
       8,    38,     8,     9,    10,    11,     8,    13,    14,     8,
      16,    48,    23,    50,    51,    52,    24,    25,    24,    25,
      28,     8,    24,    25,    26,    31,    32,    33,    22,    40,
      41,     8,    38,     8,     9,    10,    11,     8,    13,    14,
       8,    16,    48,    23,    50,    51,    52,    24,    25,    24,
      25,    28,     8,     8,     7,    37,    31,    32,    33,   179,
      40,    41,    37,   179,    17,    18,    19,    20,    21,    22,
      22,     5,     8,    48,     5,    50,    51,    52,     5,     8,
     327,    34,    35,     9,    10,    11,     8,   177,    24,    25,
      16,   319,   320,     8,     9,    10,    11,     8,    13,    14,
      22,    16,    24,    25,     5,     8,    28,   354,    30,    24,
      25,     5,     8,    24,    25,     5,    31,    32,    33,    22,
     240,    24,    25,    38,   240,    28,     5,    30,    24,    25,
      35,     8,   360,    48,   362,    50,    51,    52,     8,     9,
      10,    11,     8,    13,    14,    37,    16,    24,    25,    26,
      35,    28,    35,    22,    24,    25,     8,    35,    24,    25,
       8,    31,    32,    33,     9,    10,    11,     8,    38,    34,
     318,    16,    24,    25,    26,     8,    28,   325,    48,    23,
      50,    51,    52,    24,    25,    26,     6,    28,    24,    36,
      24,    24,    25,    26,    24,    28,   343,   344,     8,     9,
      10,    11,   349,    13,    14,    24,    16,   355,   356,   357,
     358,   359,     5,     8,    24,    25,    34,     8,     8,     7,
      36,    31,    32,    33,    36,    36,     8,     8,    38,    17,
      18,    19,    20,    21,    22,     8,    38,     5,    48,     8,
      50,    51,    52,    24,    25,   393,     8,    35,   396,     8,
       8,     8,     9,    10,    11,   345,    13,    14,     8,    16,
     350,     8,   382,     8,     6,    24,    25,    24,    25,    28,
      23,    36,    23,     8,    31,    32,    33,    24,    25,    24,
      25,    38,    37,    22,   374,   375,   376,   377,   378,    24,
      25,    48,    22,    50,    51,    52,     8,     9,    10,    11,
       8,    13,    14,     8,    16,    38,     8,   397,   398,    52,
      36,     5,    24,    25,    37,    22,    24,    25,     8,    31,
      32,    33,    24,    25,    37,     8,    38,     8,     9,    10,
      11,     8,    13,    14,    37,    16,    48,     8,    50,    51,
      52,    24,    25,    24,    25,    37,    37,    24,    25,    23,
      31,    32,    33,    24,    25,    23,     8,    38,     8,     9,
      10,    11,     8,    13,    14,     8,    16,    48,     8,    50,
      51,    52,    24,    25,    24,    25,    36,     8,    24,    25,
      49,    31,    32,    33,    24,    25,    34,     8,    38,     8,
       9,    10,    11,     8,    13,    14,    23,    16,    48,     8,
      50,    51,    52,    24,    25,    24,    25,     7,    36,    24,
      25,     8,    31,    32,    33,    24,    25,    17,    18,    19,
      20,    21,    22,    37,    23,    23,     7,    24,    25,    48,
       8,    50,    51,    52,     8,    35,    17,    18,    19,    20,
      21,    22,     8,    37,     8,   181,    24,    25,     8,   255,
      24,    25,     8,   249,    35,     8,    79,     8,    24,    25,
      24,    25,     8,    -1,    24,    25,     8,    -1,    24,    25,
       8,    24,    25,    24,    25,     8,    -1,    -1,    24,    25,
      -1,    -1,    24,    25,    -1,    -1,    24,    25,    -1,    -1,
      -1,    24,    25,     9,    10,    11,    12,    -1,    -1,    -1,
      16,    42,    43,    44,    45,    46,    47,    42,    43,    44,
      45,    46,    47,    42,    43,    44,    45,    46,    47,    17,
      18,    19,    20,    21,    17,    18,    19,    20,    21,    17,
      18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,     8,     9,    10,    11,    13,    14,    16,
      24,    25,    31,    32,    33,    48,    50,    51,    52,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    72,    73,
      74,    75,    76,    77,    80,    83,    86,    87,    88,    92,
      93,    94,    95,     0,     7,    17,    18,    19,    20,    21,
      22,    34,    35,     8,     8,     8,     8,     8,     8,    17,
      18,    19,    20,    21,    17,    18,    19,    20,    21,     8,
       8,    24,    25,    26,     8,    24,    25,    26,    22,    22,
      37,    22,     4,    55,     5,     5,     5,     5,     5,     5,
       5,     8,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
      26,    28,    81,    82,     8,    24,    25,    26,    28,    63,
      80,     8,    24,    96,    35,    35,    35,    37,    22,    35,
       8,    24,    25,     8,    24,    25,     8,    24,    25,     8,
      24,    25,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    22,    24,    25,    28,    30,    64,    65,    66,    67,
      68,    69,    70,    71,     8,    89,    94,    56,    71,    34,
      23,     6,     7,    35,    36,    24,    24,    24,     9,    10,
      11,    16,    84,    85,     9,    10,    11,    16,    78,    79,
      24,    42,    43,    44,    45,    46,    47,    70,    42,    43,
      44,    45,    46,    47,    42,    43,    44,    45,    46,    47,
      42,    43,    70,    23,    40,    41,     7,     5,    38,    23,
       8,    24,    25,    26,    28,    63,    80,    81,     8,    96,
      34,    36,    36,    36,     8,     8,     8,     8,    38,     5,
       8,     8,     8,     8,    23,     6,    36,     8,    24,    25,
      28,     8,    24,    25,    28,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,    23,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    24,    25,     8,    24,    25,     8,    24,    25,     8,
      24,    25,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    28,     8,    28,    37,    22,
      22,     8,    70,    90,    52,    38,     7,    35,    36,     8,
      24,    25,    26,    28,    63,    80,    84,     9,    10,    11,
      12,    16,    78,    40,    41,    56,    70,    70,     5,    22,
      56,     8,    96,     7,    35,    37,    37,    37,    37,    37,
      22,    71,    22,    71,    38,    23,    23,     8,    91,    71,
      37,    36,     8,    96,    56,    56,    56,    56,    56,    70,
      70,    49,    34,    23,    23,    36,    38,    38,    38,    38,
      38,    23,    23,    37,     8,    63,    37,    56,    56,    38,
      38
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 37 "parser.y"
    {printSymbolTable();;}
    break;

  case 16:
#line 56 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (2)].sval), "int")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 17:
#line 57 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (2)].sval), "float")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 18:
#line 58 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (2)].sval), "char")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 19:
#line 59 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (2)].sval), "bool")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 20:
#line 62 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("1 is numeric %d, 1 defined %d, 3 is numeric %d, 3 is defined %d, 3 is '%s'\n", isNumeric((yyvsp[(1) - (3)].sval)), symbolExists((yyvsp[(1) - (3)].sval)), isNumeric((yyvsp[(3) - (3)].sval)), symbolExists((yyvsp[(3) - (3)].sval)), (yyvsp[(3) - (3)].sval)); printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 21:
#line 63 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 22:
#line 64 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 23:
#line 65 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 24:
#line 66 "parser.y"
    {;}
    break;

  case 25:
#line 67 "parser.y"
    {;}
    break;

  case 26:
#line 68 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 27:
#line 69 "parser.y"
    {;}
    break;

  case 28:
#line 70 "parser.y"
    {;}
    break;

  case 29:
#line 73 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 30:
#line 74 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 31:
#line 75 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 32:
#line 76 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 33:
#line 77 "parser.y"
    {;}
    break;

  case 34:
#line 78 "parser.y"
    {;}
    break;

  case 35:
#line 79 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 36:
#line 80 "parser.y"
    {;}
    break;

  case 37:
#line 81 "parser.y"
    {;}
    break;

  case 38:
#line 84 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 39:
#line 85 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 40:
#line 86 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 41:
#line 87 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 42:
#line 88 "parser.y"
    {;}
    break;

  case 43:
#line 89 "parser.y"
    {;}
    break;

  case 44:
#line 90 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 45:
#line 91 "parser.y"
    {;}
    break;

  case 46:
#line 92 "parser.y"
    {;}
    break;

  case 47:
#line 95 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 48:
#line 96 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 49:
#line 97 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 50:
#line 98 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 51:
#line 99 "parser.y"
    {;}
    break;

  case 52:
#line 100 "parser.y"
    {;}
    break;

  case 53:
#line 101 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 54:
#line 102 "parser.y"
    {;}
    break;

  case 55:
#line 103 "parser.y"
    {;}
    break;

  case 56:
#line 106 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 57:
#line 107 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 58:
#line 108 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 59:
#line 109 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 60:
#line 110 "parser.y"
    {;}
    break;

  case 61:
#line 111 "parser.y"
    {;}
    break;

  case 62:
#line 112 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 63:
#line 113 "parser.y"
    {;}
    break;

  case 64:
#line 114 "parser.y"
    {;}
    break;

  case 70:
#line 124 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 71:
#line 125 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 72:
#line 126 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 73:
#line 127 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && strcmp(getType((yyvsp[(1) - (3)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 74:
#line 128 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 77:
#line 131 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 81:
#line 135 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && strcmp(getType((yyvsp[(3) - (3)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 82:
#line 138 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 83:
#line 139 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 84:
#line 140 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 85:
#line 141 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && strcmp(getType((yyvsp[(1) - (3)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 86:
#line 142 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 89:
#line 145 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 93:
#line 149 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && strcmp(getType((yyvsp[(3) - (3)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 94:
#line 152 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 95:
#line 153 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 96:
#line 154 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 97:
#line 155 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 98:
#line 156 "parser.y"
    {;}
    break;

  case 99:
#line 157 "parser.y"
    {;}
    break;

  case 100:
#line 158 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 101:
#line 159 "parser.y"
    {;}
    break;

  case 102:
#line 160 "parser.y"
    {;}
    break;

  case 103:
#line 163 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 104:
#line 164 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 105:
#line 165 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 106:
#line 166 "parser.y"
    {{if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(3) - (3)].sval));}};}
    break;

  case 109:
#line 169 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 112:
#line 174 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 113:
#line 175 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 114:
#line 176 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 115:
#line 177 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 118:
#line 180 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 121:
#line 185 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 122:
#line 186 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 123:
#line 187 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 124:
#line 188 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 127:
#line 191 "parser.y"
    {if(symbolExists((yyvsp[(3) - (3)].sval)) && isNumeric((yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[(3) - (3)].sval));};}
    break;

  case 130:
#line 196 "parser.y"
    {;}
    break;

  case 131:
#line 197 "parser.y"
    {;}
    break;

  case 132:
#line 198 "parser.y"
    {;}
    break;

  case 133:
#line 199 "parser.y"
    {;}
    break;

  case 134:
#line 200 "parser.y"
    {;}
    break;

  case 135:
#line 201 "parser.y"
    {;}
    break;

  case 136:
#line 202 "parser.y"
    {if(symbolExists((yyvsp[(1) - (1)].sval)) && strcmp(getType((yyvsp[(1) - (1)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'bool' to be used as a conditional expression.\n", line_number, (yyvsp[(1) - (1)].sval));};}
    break;

  case 146:
#line 216 "parser.y"
    {;}
    break;

  case 147:
#line 217 "parser.y"
    {;}
    break;

  case 151:
#line 225 "parser.y"
    {if(symbolExists((yyvsp[(2) - (2)].sval))==0){printf("ERROR (line %d): Symbol '%s' is undefined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 152:
#line 228 "parser.y"
    {if(symbolExists((yyvsp[(2) - (2)].sval))==0){printf("ERROR (line %d): Symbol '%s' is undefined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 153:
#line 229 "parser.y"
    {;}
    break;

  case 154:
#line 230 "parser.y"
    {;}
    break;

  case 155:
#line 231 "parser.y"
    {;}
    break;

  case 156:
#line 234 "parser.y"
    {if(symbolExists((yyvsp[(2) - (2)].sval))==0){printf("ERROR (line %d): Symbol '%s' is undefined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 157:
#line 235 "parser.y"
    {;}
    break;

  case 158:
#line 236 "parser.y"
    {;}
    break;

  case 159:
#line 237 "parser.y"
    {;}
    break;

  case 160:
#line 240 "parser.y"
    {if(symbolExists((yyvsp[(2) - (9)].sval))==0){transferFuncParams((yyvsp[(2) - (9)].sval), "intfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[(2) - (9)].sval));};}
    break;

  case 161:
#line 241 "parser.y"
    {if(symbolExists((yyvsp[(2) - (9)].sval))==0){transferFuncParams((yyvsp[(2) - (9)].sval), "floatfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[(2) - (9)].sval));};}
    break;

  case 162:
#line 242 "parser.y"
    {if(symbolExists((yyvsp[(2) - (9)].sval))==0){transferFuncParams((yyvsp[(2) - (9)].sval), "charfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[(2) - (9)].sval));};}
    break;

  case 163:
#line 243 "parser.y"
    {if(symbolExists((yyvsp[(2) - (9)].sval))==0){transferFuncParams((yyvsp[(2) - (9)].sval), "voidfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[(2) - (9)].sval));};}
    break;

  case 164:
#line 244 "parser.y"
    {if(symbolExists((yyvsp[(2) - (9)].sval))==0){transferFuncParams((yyvsp[(2) - (9)].sval), "boolfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[(2) - (9)].sval));};}
    break;

  case 168:
#line 252 "parser.y"
    {if(addFuncParam((yyvsp[(2) - (2)].sval), "int") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 169:
#line 253 "parser.y"
    {if(addFuncParam((yyvsp[(2) - (2)].sval), "char") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 170:
#line 254 "parser.y"
    {if(addFuncParam((yyvsp[(2) - (2)].sval), "float") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 171:
#line 255 "parser.y"
    {if(addFuncParam((yyvsp[(2) - (2)].sval), "bool") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 172:
#line 258 "parser.y"
    {;}
    break;

  case 181:
#line 273 "parser.y"
    {if(symbolExists((yyvsp[(2) - (5)].sval))==0){transferStructMems((yyvsp[(2) - (5)].sval));}else{resetStruct();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[(2) - (5)].sval));};}
    break;

  case 185:
#line 281 "parser.y"
    {if(addMemberToStruct((yyvsp[(2) - (2)].sval), "int")==0){}else{printf("ERROR (line %d): Struct member '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 186:
#line 282 "parser.y"
    {if(addMemberToStruct((yyvsp[(2) - (2)].sval), "char")==0){}else{printf("ERROR (line %d): Struct member '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 187:
#line 283 "parser.y"
    {if(addMemberToStruct((yyvsp[(2) - (2)].sval), "float")==0){}else{printf("ERROR (line %d): Struct member '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 188:
#line 284 "parser.y"
    {if(addMemberToStruct((yyvsp[(2) - (2)].sval), "bool")==0){}else{printf("ERROR (line %d): Struct member '%s' is already defined.\n", line_number, (yyvsp[(2) - (2)].sval));};}
    break;

  case 189:
#line 287 "parser.y"
    {if(structMemExists((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): '%s.%s' is undefined.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 198:
#line 306 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be declared and of numeric type.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 202:
#line 317 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && symbolExists((yyvsp[(3) - (3)].sval)) && areMatchingTypes((yyvsp[(1) - (3)].sval),(yyvsp[(3) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Symbols '%s' and '%s' must both be declared and of matching types.\n", line_number, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));};}
    break;

  case 203:
#line 318 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && strcmp(getType((yyvsp[(1) - (3)].sval)), "float")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'float' to assign an float value.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 204:
#line 319 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && strcmp(getType((yyvsp[(1) - (3)].sval)), "int")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'int' to assign an integer value.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 205:
#line 320 "parser.y"
    {;}
    break;

  case 206:
#line 321 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && isNumeric((yyvsp[(1) - (3)].sval))){}else{printf("TYPE ERROR (line %d): Cannot assign numeric value to non-numeric symbol '%s'.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 207:
#line 322 "parser.y"
    {if(symbolExists((yyvsp[(1) - (5)].sval)) && structMemExists((yyvsp[(3) - (5)].sval),(yyvsp[(5) - (5)].sval)) && structMatchesID((yyvsp[(3) - (5)].sval),(yyvsp[(5) - (5)].sval),(yyvsp[(1) - (5)].sval))){}else{printf("TYPE ERROR (line %d): Both symbols '%s' and '%s' member of struct '%s' must be of equivalent types to assign values between them.\n", line_number, (yyvsp[(1) - (5)].sval), (yyvsp[(5) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 208:
#line 323 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && symbolExists((yyvsp[(3) - (6)].sval)) && arrMatchesID((yyvsp[(3) - (6)].sval), (yyvsp[(1) - (6)].sval))){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be the same type as '%s'.\n", line_number, (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval));};}
    break;

  case 209:
#line 324 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && strcmp(getType((yyvsp[(1) - (3)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type boolean to assign a boolean value.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 210:
#line 325 "parser.y"
    {if(symbolExists((yyvsp[(1) - (3)].sval)) && strcmp(getType((yyvsp[(1) - (3)].sval)), "char")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type char to assign a char value.\n", line_number, (yyvsp[(1) - (3)].sval));};}
    break;

  case 211:
#line 326 "parser.y"
    {if(symbolExists((yyvsp[(5) - (5)].sval)) && structMemExists((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)) && structMatchesID((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval), (yyvsp[(5) - (5)].sval))){}else{printf("TYPE ERROR (line %d): Symbols '%s' and '%s.%s' must be of the same type.\n", line_number, (yyvsp[(5) - (5)].sval), (yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 212:
#line 327 "parser.y"
    {if(structMemExists((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)) && strcmp(getStructMemType((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)), "float")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s.%s' must be declared and of type 'float' to assign a float value.\n", line_number, (yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 213:
#line 328 "parser.y"
    {if(structMemExists((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)) && strcmp(getStructMemType((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)), "int")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s.%s' must be declared and of type 'int' to assign an integer value.\n", line_number, (yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 214:
#line 329 "parser.y"
    {;}
    break;

  case 215:
#line 330 "parser.y"
    {if(structMemExists((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)) && structMemNumeric((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval))){}else{printf("TYPE ERROR (line %d): Symbol '%s.%s' must be declared and of numeric type.\n", line_number, (yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 216:
#line 331 "parser.y"
    {if(structMemExists((yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval)) && structMemExists((yyvsp[(5) - (7)].sval), (yyvsp[(7) - (7)].sval)) && structTypesMatch((yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(5) - (7)].sval), (yyvsp[(7) - (7)].sval))){}else{printf("TYPE ERROR (line %d): Struct members must be declared and of matching types.\n", line_number);};}
    break;

  case 217:
#line 332 "parser.y"
    {if(structMemExists((yyvsp[(1) - (8)].sval), (yyvsp[(3) - (8)].sval)) && structMatchesArr((yyvsp[(1) - (8)].sval), (yyvsp[(3) - (8)].sval), (yyvsp[(5) - (8)].sval))){}else{printf("TYPE ERROR (line %d): Struct member '%s.%s' and '%s' array element must both be declared and of the same type.\n", line_number, (yyvsp[(1) - (8)].sval), (yyvsp[(3) - (8)].sval), (yyvsp[(5) - (8)].sval));};}
    break;

  case 218:
#line 333 "parser.y"
    {if(structMemExists((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)) && strcmp(getStructMemType((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s.%s' must be declared and of type 'bool' to assign a boolean value.\n", line_number, (yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 219:
#line 334 "parser.y"
    {if(structMemExists((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)) && strcmp(getStructMemType((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval)), "char")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s.%s' must be declared and of type 'char' to assign a char value.\n", line_number, (yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));};}
    break;

  case 220:
#line 335 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && symbolExists((yyvsp[(6) - (6)].sval)) && arrMatchesID((yyvsp[(1) - (6)].sval), (yyvsp[(6) - (6)].sval))){}else{printf("TYPE ERROR (line %d): Array '%s' must be the same type as symbol '%s'.\n", line_number, (yyvsp[(1) - (6)].sval), (yyvsp[(6) - (6)].sval));};}
    break;

  case 221:
#line 336 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && strcmp(getType((yyvsp[(1) - (6)].sval)), "floatarr")==0){}else{printf("TYPE ERROR (line %d): Array '%s' must be of type 'float'.\n", line_number, (yyvsp[(1) - (6)].sval));};}
    break;

  case 222:
#line 337 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && strcmp(getType((yyvsp[(1) - (6)].sval)), "intarr")==0){}else{printf("TYPE ERROR (line %d): Array '%s' must be of type 'int'.\n", line_number, (yyvsp[(1) - (6)].sval));};}
    break;

  case 223:
#line 338 "parser.y"
    {;}
    break;

  case 224:
#line 339 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && arrIsNumeric((yyvsp[(1) - (6)].sval))){}else{printf("TYPE ERROR (line %d): Array '%s' must be of numeric type.\n", line_number, (yyvsp[(1) - (6)].sval));};}
    break;

  case 225:
#line 340 "parser.y"
    {if(symbolExists((yyvsp[(1) - (8)].sval)) && structMemExists((yyvsp[(6) - (8)].sval), (yyvsp[(8) - (8)].sval)) && structMatchesArr((yyvsp[(6) - (8)].sval), (yyvsp[(8) - (8)].sval), (yyvsp[(1) - (8)].sval))){}else{printf("TYPE ERROR (line %d): Array '%s' and struct member '%s.%s' must be of compatible types.\n", line_number, (yyvsp[(1) - (8)].sval), (yyvsp[(6) - (8)].sval), (yyvsp[(8) - (8)].sval));};}
    break;

  case 226:
#line 341 "parser.y"
    {if(symbolExists((yyvsp[(1) - (9)].sval)) && symbolExists((yyvsp[(6) - (9)].sval)) && areMatchingTypes((yyvsp[(1) - (9)].sval), (yyvsp[(6) - (9)].sval))){}else{printf("TYPE ERROR (line %d): Arrays '%s' and '%s' must be of the same type.", line_number, (yyvsp[(1) - (9)].sval), (yyvsp[(6) - (9)].sval));};}
    break;

  case 227:
#line 342 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && strcmp(getType((yyvsp[(1) - (6)].sval)), "boolarr")==0){}else{printf("TYPE ERROR (line %d): Array '%s' must be of type 'boolean'.\n", line_number, (yyvsp[(1) - (6)].sval));};}
    break;

  case 228:
#line 343 "parser.y"
    {if(symbolExists((yyvsp[(1) - (6)].sval)) && strcmp(getType((yyvsp[(1) - (6)].sval)), "chararr")==0){}else{printf("TYPE ERROR (line %d): Array '%s' must be of type 'char'.\n", line_number, (yyvsp[(1) - (6)].sval));};}
    break;

  case 229:
#line 346 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (5)].sval), "intarr")==1){printf("ERROR (line %d): Array '%s' is already defined.\n", line_number, (yyvsp[(2) - (5)].sval));};}
    break;

  case 230:
#line 347 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (5)].sval), "floatarr")==1){printf("ERROR (line %d): Array '%s' is already defined.\n", line_number, (yyvsp[(2) - (5)].sval));};}
    break;

  case 231:
#line 348 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (5)].sval), "chararr")==1){printf("ERROR (line %d): Array '%s' is already defined.\n", line_number, (yyvsp[(2) - (5)].sval));};}
    break;

  case 232:
#line 349 "parser.y"
    {if(addToSymbolTable((yyvsp[(2) - (5)].sval), "boolarr")==1){printf("ERROR (line %d): Array '%s' is already defined.\n", line_number, (yyvsp[(2) - (5)].sval));};}
    break;

  case 234:
#line 353 "parser.y"
    {if(symbolExists((yyvsp[(1) - (1)].sval)) && strcmp(getType((yyvsp[(1) - (1)].sval)), "int")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' used as array reference must be a defined integer type.",line_number, (yyvsp[(1) - (1)].sval));};}
    break;


/* Line 1267 of yacc.c.  */
#line 2651 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 355 "parser.y"


void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}

