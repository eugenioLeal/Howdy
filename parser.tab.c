/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include<stdio.h>
#include<string.h>
extern int yylex(void);
extern int line_number;
void yyerror(char *s);

#include "symbolTable.h"

#line 80 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

  int ival;
  float fval;
  char cval;
  char * sval;

#line 192 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  225
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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
     254,   255,   258,   261,   262,   263,   266,   269,   270,   271,
     274,   275,   276,   277,   280,   283,   284,   285,   288,   291,
     292,   295,   296,   299,   300,   303,   306,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   336,   337,   338,   339,   342
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "parameter_list", "struct_definition", "struct_declaration_list",
  "struct_declaration", "struct_member_reference", "iteration_statment",
  "for_loop", "optional_assignment", "optional_conditional",
  "optional_increment", "while_loop", "dowhile_loop",
  "assignment_statement", "array_definition", "array_reference", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   459,    28,   161,    32,    61,    73,    84,    96,   103,
     534,   539,   115,     5,    81,    50,   122,   116,   139,  -156,
       1,   167,  -156,  -156,  -156,  -156,  -156,   170,  -156,   182,
    -156,  -156,  -156,  -156,   187,  -156,     3,  -156,  -156,  -156,
    -156,   197,   207,   184,  -156,   208,    11,    42,   118,   142,
     185,   209,    75,   196,   188,   189,   200,   213,   204,   210,
     229,   266,   295,   301,   303,   314,   325,   340,   343,   362,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   183,
     248,   459,   183,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     106,  -156,  -156,   149,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     254,   238,   212,   534,   539,  -156,  -156,  -156,  -156,  -156,
     247,   260,   265,   268,   512,   515,   272,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,   491,   219,   497,
     503,   -19,   219,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
      23,     9,   228,   302,  -156,    46,    72,   212,   534,   539,
    -156,  -156,  -156,  -156,  -156,   212,   534,   539,  -156,  -156,
    -156,  -156,  -156,   209,  -156,  -156,   271,   281,   286,   307,
     316,   328,   339,   317,   351,   349,   350,   352,   353,   358,
     360,   348,   273,   280,   370,   376,   395,   401,   365,   407,
     426,   432,   438,   457,   463,   469,   477,   481,   488,   490,
     492,    10,    13,  -156,   355,   363,   367,   219,   341,   364,
    -156,  -156,  -156,  -156,   391,   418,   419,   422,  -156,   512,
    -156,  -156,  -156,  -156,    64,   515,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,    95,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   459,   219,
     219,  -156,   449,   390,   459,  -156,  -156,  -156,  -156,  -156,
     396,   406,   421,   427,   437,  -156,   227,   255,    77,   472,
     474,   447,   183,   108,   459,   459,   459,   459,   459,   219,
     144,   219,   144,   450,  -156,  -156,   452,   485,    97,  -156,
     138,   190,   262,   321,   366,   504,   506,   467,   495,   493,
    -156,  -156,  -156,  -156,  -156,  -156,    95,    95,   459,   544,
    -156,   459,   397,   428,  -156,  -156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,    65,    66,    67,    68,    69,     0,     5,     0,
     148,   149,   150,     7,     0,     9,     0,    12,   185,   186,
     187,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,   175,     0,     0,    16,    17,    18,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,   154,   155,   153,   156,   158,   159,   157,     0,
     190,     0,     0,     2,    15,     3,     4,     6,     8,    10,
       0,    11,    13,     0,   184,    20,    21,    22,    29,    30,
      31,    38,    39,    40,    47,    48,    49,    56,    57,    58,
     173,     0,   197,   199,   198,   204,   201,   200,   202,   203,
       0,     0,     0,     0,   179,   167,     0,    23,    24,    25,
      32,    33,    34,    41,    42,    43,    50,    51,    52,    59,
      60,    61,    26,    27,    28,    35,    36,    37,    44,    45,
      46,    53,    54,    55,    62,    63,    64,   136,     0,     0,
       0,   137,     0,   130,   131,   132,   133,   134,   135,   138,
       0,     0,     0,     0,   189,     0,     0,   205,   207,   206,
     212,   209,   208,   210,   211,   213,   215,   214,   220,   217,
     216,   218,   219,   175,   172,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     0,     0,     0,   192,     0,     0,
     174,   221,   222,   223,     0,     0,     0,     0,   176,   177,
     168,   170,   169,   171,     0,   167,   224,    70,    71,    72,
      73,    82,    83,    84,    85,    94,    95,    96,   103,   104,
     105,   112,   113,   114,   121,   122,   123,     0,    74,    75,
      76,    86,    87,    88,    97,    98,    99,   106,   107,   108,
     115,   116,   117,   124,   125,   126,    77,    78,    79,    89,
      90,    91,   100,   101,   102,   109,   110,   111,   118,   119,
     120,   127,   128,   129,    81,    80,    93,    92,     0,     0,
       0,   191,     0,     0,     0,   180,   182,   181,   183,   178,
       0,     0,     0,     0,     0,   166,     0,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
     144,     0,   145,   146,   142,   143,     0,     0,     0,   195,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   160,   161,   162,   163,   164,   140,   141,     0,     0,
     193,     0,     0,     0,   147,   188
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,   -20,   -79,  -156,  -156,  -156,  -156,  -156,  -156,
     -51,  -156,  -156,  -156,  -156,  -156,  -156,  -155,   -78,  -156,
    -156,  -156,  -156,  -156,  -156,   263,  -156,   -46,   373,  -156,
     283,  -156,   -32,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     487,  -156,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   163,   164,   165,   166,   167,   168,   169,   170,    28,
      29,    30,    31,    32,    33,   209,   210,    34,   111,    35,
     203,   204,    36,    37,    38,   173,   322,   357,    39,    40,
      41,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   116,   175,   218,   176,    83,   117,   233,    89,     3,
       4,     5,     6,    71,     7,     8,    45,     9,   314,    95,
     118,   316,     1,   231,   232,    10,    11,   119,    44,    72,
      73,    74,    12,    13,    14,    96,    97,    90,   315,   181,
      54,   317,   189,    52,   182,    53,   234,   190,   172,    15,
      98,    16,    17,    18,     3,     4,     5,     6,   183,     7,
       8,   191,     9,   235,   236,   184,    99,   100,   192,    55,
      10,    11,    79,   330,   331,   332,   333,    12,    13,    14,
     334,    56,   321,   112,   238,     3,     4,     5,     6,    75,
       7,     8,    57,     9,    15,   239,    16,    17,    18,   113,
     114,    10,    11,   115,    58,    76,    77,    78,    12,    13,
      14,    59,   235,   236,   177,   353,     3,     4,     5,     6,
     370,     7,     8,    70,     9,    15,   101,    16,    17,    18,
     178,   179,    10,    11,   180,   336,   337,   235,   236,    12,
      13,    14,   102,   103,    80,   359,     3,     4,     5,     6,
     104,     7,     8,    81,     9,    84,    15,   185,    16,    17,
      18,    82,    10,    11,   339,   340,   105,   106,    45,    12,
      13,    14,    85,   186,   187,    86,   371,   188,    46,    47,
      48,    49,    50,    51,   235,   236,    15,    87,    16,    17,
      18,   157,    88,   107,   365,    52,   366,    53,     3,     4,
       5,     6,    91,     7,     8,   158,     9,   159,   160,   108,
     109,   161,    92,   162,    10,    11,    94,   110,    93,    45,
     120,    12,    13,    14,   121,   122,   125,   157,   372,    46,
      47,    48,    49,    50,    51,   157,   123,   127,    15,   338,
      16,    17,    18,   159,   160,   343,   126,   161,    53,   349,
     124,   159,   160,   128,   129,   161,   171,   162,   350,   352,
     193,   194,    90,   157,   358,   360,   361,   362,   363,   364,
       3,     4,     5,     6,   130,     7,     8,   351,     9,   159,
     160,   257,   195,   161,   196,   162,    10,    11,   261,   197,
     131,   132,   198,    12,    13,    14,   211,   258,   259,   382,
     373,   260,   383,   133,   262,   263,   241,   237,   264,   136,
      15,   139,    16,    17,    18,   244,   242,   380,    84,   134,
     135,   243,   142,    84,   245,   137,   138,   140,   141,     3,
       4,     5,     6,   145,     7,     8,   246,     9,   143,   144,
      84,    84,    84,    84,    84,    10,    11,   247,   148,   146,
     147,   151,    12,    13,    14,   248,   249,   250,   251,   374,
     252,   253,    84,    84,   149,   150,   255,   152,   153,    15,
     154,    16,    17,    18,     3,     4,     5,     6,   265,     7,
       8,   254,     9,   256,   268,   319,   155,   156,   277,   320,
      10,    11,   318,   323,   266,   267,   325,    12,    13,    14,
     269,   270,   324,   271,   375,     3,     4,     5,     6,   274,
       7,     8,   342,     9,    15,   278,    16,    17,    18,   272,
     273,    10,    11,   326,   327,   275,   276,   328,    12,    13,
      14,   279,   280,   344,   281,   384,     3,     4,     5,     6,
     284,     7,     8,   345,     9,    15,   287,    16,    17,    18,
     282,   283,    10,    11,   341,   356,   285,   286,   346,    12,
      13,    14,   288,   289,   347,   290,   385,     3,     4,     5,
       6,   293,     7,     8,   348,     9,    15,   296,    16,    17,
      18,   291,   292,    10,    11,   299,   368,   294,   295,   302,
      12,    13,    14,   297,   298,   354,   305,   355,   308,   367,
     311,   300,   301,   379,   378,   303,   304,    15,   369,    16,
      17,    18,   306,   307,   309,   310,   312,   313,   335,    10,
      11,   199,   200,   201,   205,   206,   207,   376,   202,   377,
     381,   208,   329,   212,   213,   214,   215,   216,   217,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    46,    47,    48,    49,    50,   240,   174
};

static const yytype_int16 yycheck[] =
{
      20,    52,    81,   158,    82,     4,    52,   162,     5,     8,
       9,    10,    11,     8,    13,    14,     7,    16,     8,     8,
      52,     8,     3,    42,    43,    24,    25,    52,     0,    24,
      25,    26,    31,    32,    33,    24,    25,    34,    28,    90,
       8,    28,    93,    34,    90,    36,    23,    93,    80,    48,
       8,    50,    51,    52,     8,     9,    10,    11,    90,    13,
      14,    93,    16,    40,    41,    90,    24,    25,    93,     8,
      24,    25,    22,     9,    10,    11,    12,    31,    32,    33,
      16,     8,   237,     8,    38,     8,     9,    10,    11,     8,
      13,    14,     8,    16,    48,    23,    50,    51,    52,    24,
      25,    24,    25,    28,     8,    24,    25,    26,    31,    32,
      33,     8,    40,    41,     8,    38,     8,     9,    10,    11,
      23,    13,    14,     8,    16,    48,     8,    50,    51,    52,
      24,    25,    24,    25,    28,    40,    41,    40,    41,    31,
      32,    33,    24,    25,    22,    37,     8,     9,    10,    11,
       8,    13,    14,    37,    16,   175,    48,     8,    50,    51,
      52,    22,    24,    25,   319,   320,    24,    25,     7,    31,
      32,    33,     5,    24,    25,     5,    38,    28,    17,    18,
      19,    20,    21,    22,    40,    41,    48,     5,    50,    51,
      52,     8,     5,     8,   349,    34,   351,    36,     8,     9,
      10,    11,     5,    13,    14,    22,    16,    24,    25,    24,
      25,    28,     5,    30,    24,    25,     8,     8,    34,     7,
      24,    31,    32,    33,    36,    36,    22,     8,    38,    17,
      18,    19,    20,    21,    22,     8,    36,     8,    48,   318,
      50,    51,    52,    24,    25,   324,    36,    28,    36,    22,
      37,    24,    25,    24,    25,    28,     8,    30,   336,   337,
       6,    23,    34,     8,   342,   344,   345,   346,   347,   348,
       8,     9,    10,    11,     8,    13,    14,    22,    16,    24,
      25,     8,    35,    28,    24,    30,    24,    25,     8,    24,
      24,    25,    24,    31,    32,    33,    24,    24,    25,   378,
      38,    28,   381,     8,    24,    25,    35,     5,    28,     8,
      48,     8,    50,    51,    52,     8,    35,   368,   338,    24,
      25,    35,     8,   343,     8,    24,    25,    24,    25,     8,
       9,    10,    11,     8,    13,    14,     8,    16,    24,    25,
     360,   361,   362,   363,   364,    24,    25,     8,     8,    24,
      25,     8,    31,    32,    33,    38,     5,     8,     8,    38,
       8,     8,   382,   383,    24,    25,     6,    24,    25,    48,
       8,    50,    51,    52,     8,     9,    10,    11,     8,    13,
      14,    23,    16,    35,     8,    22,    24,    25,    23,    22,
      24,    25,    37,    52,    24,    25,     5,    31,    32,    33,
      24,    25,    38,     8,    38,     8,     9,    10,    11,     8,
      13,    14,    22,    16,    48,     8,    50,    51,    52,    24,
      25,    24,    25,     5,     5,    24,    25,     5,    31,    32,
      33,    24,    25,    37,     8,    38,     8,     9,    10,    11,
       8,    13,    14,    37,    16,    48,     8,    50,    51,    52,
      24,    25,    24,    25,     5,     8,    24,    25,    37,    31,
      32,    33,    24,    25,    37,     8,    38,     8,     9,    10,
      11,     8,    13,    14,    37,    16,    48,     8,    50,    51,
      52,    24,    25,    24,    25,     8,    34,    24,    25,     8,
      31,    32,    33,    24,    25,    23,     8,    23,     8,    49,
       8,    24,    25,     8,    37,    24,    25,    48,    23,    50,
      51,    52,    24,    25,    24,    25,    24,    25,   255,    24,
      25,     9,    10,    11,     9,    10,    11,    23,    16,    23,
      37,    16,   249,    42,    43,    44,    45,    46,    47,    42,
      43,    44,    45,    46,    47,    42,    43,    44,    45,    46,
      47,    17,    18,    19,    20,    21,    17,    18,    19,    20,
      21,    17,    18,    19,    20,    21,   193,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    54,     8,     9,    10,    11,    13,    14,    16,
      24,    25,    31,    32,    33,    48,    50,    51,    52,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    72,    73,
      74,    75,    76,    77,    80,    82,    85,    86,    87,    91,
      92,    93,    94,    95,     0,     7,    17,    18,    19,    20,
      21,    22,    34,    36,     8,     8,     8,     8,     8,     8,
      17,    18,    19,    20,    21,    17,    18,    19,    20,    21,
       8,     8,    24,    25,    26,     8,    24,    25,    26,    22,
      22,    37,    22,     4,    55,     5,     5,     5,     5,     5,
      34,     5,     5,    34,     8,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    81,     8,    24,    25,    28,    63,    80,    85,    95,
      24,    36,    36,    36,    37,    22,    36,     8,    24,    25,
       8,    24,    25,     8,    24,    25,     8,    24,    25,     8,
      24,    25,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    22,    24,
      25,    28,    30,    64,    65,    66,    67,    68,    69,    70,
      71,     8,    85,    88,    93,    56,    71,     8,    24,    25,
      28,    63,    80,    85,    95,     8,    24,    25,    28,    63,
      80,    85,    95,     6,    23,    35,    24,    24,    24,     9,
      10,    11,    16,    83,    84,     9,    10,    11,    16,    78,
      79,    24,    42,    43,    44,    45,    46,    47,    70,    42,
      43,    44,    45,    46,    47,    42,    43,    44,    45,    46,
      47,    42,    43,    70,    23,    40,    41,     5,    38,    23,
      81,    35,    35,    35,     8,     8,     8,     8,    38,     5,
       8,     8,     8,     8,    23,     6,    35,     8,    24,    25,
      28,     8,    24,    25,    28,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,    23,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    24,    25,     8,    24,    25,     8,    24,    25,     8,
      24,    25,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    28,     8,    28,    37,    22,
      22,    70,    89,    52,    38,     5,     5,     5,     5,    83,
       9,    10,    11,    12,    16,    78,    40,    41,    56,    70,
      70,     5,    22,    56,    37,    37,    37,    37,    37,    22,
      71,    22,    71,    38,    23,    23,     8,    90,    71,    37,
      56,    56,    56,    56,    56,    70,    70,    49,    34,    23,
      23,    38,    38,    38,    38,    38,    23,    23,    37,     8,
      63,    37,    56,    56,    38,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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
      79,    79,    80,    81,    81,    81,    82,    83,    83,    83,
      84,    84,    84,    84,    85,    86,    86,    86,    87,    88,
      88,    89,    89,    90,    90,    91,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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
       2,     2,     4,     1,     3,     0,     5,     2,     3,     0,
       3,     3,     3,     3,     3,     1,     1,     1,    11,     1,
       0,     1,     0,     3,     0,     7,     8,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     5,     5,     5,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2:
#line 37 "parser.y"
                                                      {printSymbolTable();}
#line 1685 "parser.tab.c"
    break;

  case 16:
#line 56 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "int")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1691 "parser.tab.c"
    break;

  case 17:
#line 57 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "float")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1697 "parser.tab.c"
    break;

  case 18:
#line 58 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "char")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1703 "parser.tab.c"
    break;

  case 19:
#line 59 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "bool")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1709 "parser.tab.c"
    break;

  case 20:
#line 62 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("1 is numeric %d, 1 defined %d, 3 is numeric %d, 3 is defined %d, 3 is '%s'\n", isNumeric((yyvsp[-2].sval)), symbolExists((yyvsp[-2].sval)), isNumeric((yyvsp[0].sval)), symbolExists((yyvsp[0].sval)), (yyvsp[0].sval)); printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1715 "parser.tab.c"
    break;

  case 21:
#line 63 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1721 "parser.tab.c"
    break;

  case 22:
#line 64 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1727 "parser.tab.c"
    break;

  case 23:
#line 65 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1733 "parser.tab.c"
    break;

  case 24:
#line 66 "parser.y"
                                            {}
#line 1739 "parser.tab.c"
    break;

  case 25:
#line 67 "parser.y"
                                            {}
#line 1745 "parser.tab.c"
    break;

  case 26:
#line 68 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1751 "parser.tab.c"
    break;

  case 27:
#line 69 "parser.y"
                                            {}
#line 1757 "parser.tab.c"
    break;

  case 28:
#line 70 "parser.y"
                                            {}
#line 1763 "parser.tab.c"
    break;

  case 29:
#line 73 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1769 "parser.tab.c"
    break;

  case 30:
#line 74 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1775 "parser.tab.c"
    break;

  case 31:
#line 75 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1781 "parser.tab.c"
    break;

  case 32:
#line 76 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1787 "parser.tab.c"
    break;

  case 33:
#line 77 "parser.y"
                                                {}
#line 1793 "parser.tab.c"
    break;

  case 34:
#line 78 "parser.y"
                                                {}
#line 1799 "parser.tab.c"
    break;

  case 35:
#line 79 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1805 "parser.tab.c"
    break;

  case 36:
#line 80 "parser.y"
                                                {}
#line 1811 "parser.tab.c"
    break;

  case 37:
#line 81 "parser.y"
                                                {}
#line 1817 "parser.tab.c"
    break;

  case 38:
#line 84 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1823 "parser.tab.c"
    break;

  case 39:
#line 85 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1829 "parser.tab.c"
    break;

  case 40:
#line 86 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1835 "parser.tab.c"
    break;

  case 41:
#line 87 "parser.y"
                                                  {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1841 "parser.tab.c"
    break;

  case 42:
#line 88 "parser.y"
                                                  {}
#line 1847 "parser.tab.c"
    break;

  case 43:
#line 89 "parser.y"
                                                  {}
#line 1853 "parser.tab.c"
    break;

  case 44:
#line 90 "parser.y"
                                                  {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1859 "parser.tab.c"
    break;

  case 45:
#line 91 "parser.y"
                                                  {}
#line 1865 "parser.tab.c"
    break;

  case 46:
#line 92 "parser.y"
                                                  {}
#line 1871 "parser.tab.c"
    break;

  case 47:
#line 95 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1877 "parser.tab.c"
    break;

  case 48:
#line 96 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1883 "parser.tab.c"
    break;

  case 49:
#line 97 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1889 "parser.tab.c"
    break;

  case 50:
#line 98 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1895 "parser.tab.c"
    break;

  case 51:
#line 99 "parser.y"
                                            {}
#line 1901 "parser.tab.c"
    break;

  case 52:
#line 100 "parser.y"
                                            {}
#line 1907 "parser.tab.c"
    break;

  case 53:
#line 101 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1913 "parser.tab.c"
    break;

  case 54:
#line 102 "parser.y"
                                            {}
#line 1919 "parser.tab.c"
    break;

  case 55:
#line 103 "parser.y"
                                            {}
#line 1925 "parser.tab.c"
    break;

  case 56:
#line 106 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1931 "parser.tab.c"
    break;

  case 57:
#line 107 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1937 "parser.tab.c"
    break;

  case 58:
#line 108 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1943 "parser.tab.c"
    break;

  case 59:
#line 109 "parser.y"
                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1949 "parser.tab.c"
    break;

  case 60:
#line 110 "parser.y"
                                        {}
#line 1955 "parser.tab.c"
    break;

  case 61:
#line 111 "parser.y"
                                        {}
#line 1961 "parser.tab.c"
    break;

  case 62:
#line 112 "parser.y"
                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1967 "parser.tab.c"
    break;

  case 63:
#line 113 "parser.y"
                                        {}
#line 1973 "parser.tab.c"
    break;

  case 64:
#line 114 "parser.y"
                                        {}
#line 1979 "parser.tab.c"
    break;

  case 70:
#line 124 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1985 "parser.tab.c"
    break;

  case 71:
#line 125 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 1991 "parser.tab.c"
    break;

  case 72:
#line 126 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 1997 "parser.tab.c"
    break;

  case 73:
#line 127 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[-2].sval));}}
#line 2003 "parser.tab.c"
    break;

  case 74:
#line 128 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2009 "parser.tab.c"
    break;

  case 77:
#line 131 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2015 "parser.tab.c"
    break;

  case 81:
#line 135 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && strcmp(getType((yyvsp[0].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[0].sval));}}
#line 2021 "parser.tab.c"
    break;

  case 82:
#line 138 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2027 "parser.tab.c"
    break;

  case 83:
#line 139 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2033 "parser.tab.c"
    break;

  case 84:
#line 140 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2039 "parser.tab.c"
    break;

  case 85:
#line 141 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[-2].sval));}}
#line 2045 "parser.tab.c"
    break;

  case 86:
#line 142 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2051 "parser.tab.c"
    break;

  case 89:
#line 145 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2057 "parser.tab.c"
    break;

  case 93:
#line 149 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && strcmp(getType((yyvsp[0].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[0].sval));}}
#line 2063 "parser.tab.c"
    break;

  case 94:
#line 152 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2069 "parser.tab.c"
    break;

  case 95:
#line 153 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2075 "parser.tab.c"
    break;

  case 96:
#line 154 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2081 "parser.tab.c"
    break;

  case 97:
#line 155 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2087 "parser.tab.c"
    break;

  case 98:
#line 156 "parser.y"
                                                    {}
#line 2093 "parser.tab.c"
    break;

  case 99:
#line 157 "parser.y"
                                                    {}
#line 2099 "parser.tab.c"
    break;

  case 100:
#line 158 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2105 "parser.tab.c"
    break;

  case 101:
#line 159 "parser.y"
                                                    {}
#line 2111 "parser.tab.c"
    break;

  case 102:
#line 160 "parser.y"
                                                    {}
#line 2117 "parser.tab.c"
    break;

  case 103:
#line 163 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2123 "parser.tab.c"
    break;

  case 104:
#line 164 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2129 "parser.tab.c"
    break;

  case 105:
#line 165 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2135 "parser.tab.c"
    break;

  case 106:
#line 166 "parser.y"
                                                    {{if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}}
#line 2141 "parser.tab.c"
    break;

  case 109:
#line 169 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2147 "parser.tab.c"
    break;

  case 112:
#line 174 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2153 "parser.tab.c"
    break;

  case 113:
#line 175 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2159 "parser.tab.c"
    break;

  case 114:
#line 176 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2165 "parser.tab.c"
    break;

  case 115:
#line 177 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2171 "parser.tab.c"
    break;

  case 118:
#line 180 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2177 "parser.tab.c"
    break;

  case 121:
#line 185 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2183 "parser.tab.c"
    break;

  case 122:
#line 186 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2189 "parser.tab.c"
    break;

  case 123:
#line 187 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2195 "parser.tab.c"
    break;

  case 124:
#line 188 "parser.y"
                                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2201 "parser.tab.c"
    break;

  case 127:
#line 191 "parser.y"
                                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2207 "parser.tab.c"
    break;

  case 130:
#line 196 "parser.y"
                                                {}
#line 2213 "parser.tab.c"
    break;

  case 131:
#line 197 "parser.y"
                                                {}
#line 2219 "parser.tab.c"
    break;

  case 132:
#line 198 "parser.y"
                                                {}
#line 2225 "parser.tab.c"
    break;

  case 133:
#line 199 "parser.y"
                                                {}
#line 2231 "parser.tab.c"
    break;

  case 134:
#line 200 "parser.y"
                                                {}
#line 2237 "parser.tab.c"
    break;

  case 135:
#line 201 "parser.y"
                                                {}
#line 2243 "parser.tab.c"
    break;

  case 136:
#line 202 "parser.y"
                                  {if(symbolExists((yyvsp[0].sval)) && strcmp(getType((yyvsp[0].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'bool' to be used as a conditional expression.\n", line_number, (yyvsp[0].sval));}}
#line 2249 "parser.tab.c"
    break;

  case 146:
#line 216 "parser.y"
                                                                                                    {}
#line 2255 "parser.tab.c"
    break;

  case 147:
#line 217 "parser.y"
                                                                                                                                               {}
#line 2261 "parser.tab.c"
    break;

  case 151:
#line 225 "parser.y"
                    {printf("STDIN");}
#line 2267 "parser.tab.c"
    break;

  case 152:
#line 228 "parser.y"
                                {}
#line 2273 "parser.tab.c"
    break;

  case 153:
#line 229 "parser.y"
                                {}
#line 2279 "parser.tab.c"
    break;

  case 154:
#line 230 "parser.y"
                                {}
#line 2285 "parser.tab.c"
    break;

  case 155:
#line 231 "parser.y"
                                {}
#line 2291 "parser.tab.c"
    break;

  case 156:
#line 234 "parser.y"
                                    {}
#line 2297 "parser.tab.c"
    break;

  case 157:
#line 235 "parser.y"
                                    {}
#line 2303 "parser.tab.c"
    break;

  case 158:
#line 236 "parser.y"
                                    {}
#line 2309 "parser.tab.c"
    break;

  case 159:
#line 237 "parser.y"
                                    {}
#line 2315 "parser.tab.c"
    break;

  case 160:
#line 240 "parser.y"
                                                                                                        {if(symbolExists((yyvsp[-7].sval))==0){transferFuncParams((yyvsp[-7].sval), "intfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[-7].sval));}}
#line 2321 "parser.tab.c"
    break;

  case 161:
#line 241 "parser.y"
                                                                                                        {if(symbolExists((yyvsp[-7].sval))==0){transferFuncParams((yyvsp[-7].sval), "floatfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[-7].sval));}}
#line 2327 "parser.tab.c"
    break;

  case 162:
#line 242 "parser.y"
                                                                                                        {if(symbolExists((yyvsp[-7].sval))==0){transferFuncParams((yyvsp[-7].sval), "charfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[-7].sval));}}
#line 2333 "parser.tab.c"
    break;

  case 163:
#line 243 "parser.y"
                                                                                                        {if(symbolExists((yyvsp[-7].sval))==0){transferFuncParams((yyvsp[-7].sval), "voidfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[-7].sval));}}
#line 2339 "parser.tab.c"
    break;

  case 164:
#line 244 "parser.y"
                                                                                                        {if(symbolExists((yyvsp[-7].sval))==0){transferFuncParams((yyvsp[-7].sval), "boolfunc");}else{resetParams();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[-7].sval));}}
#line 2345 "parser.tab.c"
    break;

  case 168:
#line 252 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "int") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2351 "parser.tab.c"
    break;

  case 169:
#line 253 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "char") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2357 "parser.tab.c"
    break;

  case 170:
#line 254 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "float") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2363 "parser.tab.c"
    break;

  case 171:
#line 255 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "bool") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2369 "parser.tab.c"
    break;

  case 172:
#line 258 "parser.y"
                                               {}
#line 2375 "parser.tab.c"
    break;

  case 176:
#line 266 "parser.y"
                                                                   {if(symbolExists((yyvsp[-3].sval))==0){transferStructMems((yyvsp[-3].sval));}else{resetStruct();printf("ERROR (line %d): Symbol %s is already defined.\n", line_number, (yyvsp[-3].sval));}}
#line 2381 "parser.tab.c"
    break;

  case 180:
#line 274 "parser.y"
                                    {if(addMemberToStruct((yyvsp[-1].sval), "int")==0){}else{printf("ERROR (%d): Struct member '%s' is already defined.\n", line_number, (yyvsp[-1].sval));}}
#line 2387 "parser.tab.c"
    break;

  case 181:
#line 275 "parser.y"
                                    {if(addMemberToStruct((yyvsp[-1].sval), "char")==0){}else{printf("ERROR (%d): Struct member '%s' is already defined.\n", line_number, (yyvsp[-1].sval));}}
#line 2393 "parser.tab.c"
    break;

  case 182:
#line 276 "parser.y"
                                    {if(addMemberToStruct((yyvsp[-1].sval), "float")==0){}else{printf("ERROR (%d): Struct member '%s' is already defined.\n", line_number, (yyvsp[-1].sval));}}
#line 2399 "parser.tab.c"
    break;

  case 183:
#line 277 "parser.y"
                                    {if(addMemberToStruct((yyvsp[-1].sval), "bool")==0){}else{printf("ERROR (%d): Struct member '%s' is already defined.\n", line_number, (yyvsp[-1].sval));}}
#line 2405 "parser.tab.c"
    break;

  case 184:
#line 280 "parser.y"
                                   {printf("struct ref %s . %s\n", (yyvsp[-2].sval), (yyvsp[0].sval));}
#line 2411 "parser.tab.c"
    break;

  case 193:
#line 299 "parser.y"
                                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be declared and of numeric type.\n", line_number, (yyvsp[-2].sval));}}
#line 2417 "parser.tab.c"
    break;

  case 197:
#line 310 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval),(yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbols '%s' and '%s' must both be declared and of matching types.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2423 "parser.tab.c"
    break;

  case 198:
#line 311 "parser.y"
                                                           {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "float")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'float' to assign an float value.\n", line_number, (yyvsp[-2].sval));}}
#line 2429 "parser.tab.c"
    break;

  case 199:
#line 312 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "int")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'int' to assign an integer value.\n", line_number, (yyvsp[-2].sval));}}
#line 2435 "parser.tab.c"
    break;

  case 200:
#line 313 "parser.y"
                                                               {}
#line 2441 "parser.tab.c"
    break;

  case 201:
#line 314 "parser.y"
                                                                      {}
#line 2447 "parser.tab.c"
    break;

  case 202:
#line 315 "parser.y"
                                                                         {}
#line 2453 "parser.tab.c"
    break;

  case 203:
#line 316 "parser.y"
                                                                 {}
#line 2459 "parser.tab.c"
    break;

  case 204:
#line 317 "parser.y"
                                                         {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type boolean to assign a boolean value.\n", line_number, (yyvsp[-2].sval));}}
#line 2465 "parser.tab.c"
    break;

  case 205:
#line 318 "parser.y"
                                                                         {}
#line 2471 "parser.tab.c"
    break;

  case 206:
#line 319 "parser.y"
                                                                               {}
#line 2477 "parser.tab.c"
    break;

  case 207:
#line 320 "parser.y"
                                                                             {}
#line 2483 "parser.tab.c"
    break;

  case 208:
#line 321 "parser.y"
                                                                                    {}
#line 2489 "parser.tab.c"
    break;

  case 209:
#line 322 "parser.y"
                                                                                           {}
#line 2495 "parser.tab.c"
    break;

  case 210:
#line 323 "parser.y"
                                                                                              {}
#line 2501 "parser.tab.c"
    break;

  case 211:
#line 324 "parser.y"
                                                                                      {}
#line 2507 "parser.tab.c"
    break;

  case 212:
#line 325 "parser.y"
                                                                              {}
#line 2513 "parser.tab.c"
    break;

  case 213:
#line 326 "parser.y"
                                                                 {}
#line 2519 "parser.tab.c"
    break;

  case 214:
#line 327 "parser.y"
                                                                       {}
#line 2525 "parser.tab.c"
    break;

  case 215:
#line 328 "parser.y"
                                                                     {}
#line 2531 "parser.tab.c"
    break;

  case 216:
#line 329 "parser.y"
                                                                            {}
#line 2537 "parser.tab.c"
    break;

  case 217:
#line 330 "parser.y"
                                                                                   {}
#line 2543 "parser.tab.c"
    break;

  case 218:
#line 331 "parser.y"
                                                                                      {}
#line 2549 "parser.tab.c"
    break;

  case 219:
#line 332 "parser.y"
                                                                              {}
#line 2555 "parser.tab.c"
    break;

  case 220:
#line 333 "parser.y"
                                                                      {}
#line 2561 "parser.tab.c"
    break;


#line 2565 "parser.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 346 "parser.y"


void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
