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
#define YYLAST   564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

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
     240,   241,   242,   243,   246,   247,   248,   251,   252,   253,
     254,   257,   260,   261,   262,   265,   268,   271,   272,   273,
     276,   279,   280,   283,   284,   287,   288,   291,   294,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   324,   325,   326,   329
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
  "declaration_list", "func_param_declaration", "function_call",
  "parameter_list", "struct_definition", "struct_member_reference",
  "iteration_statment", "for_loop", "optional_assignment",
  "optional_conditional", "optional_increment", "while_loop",
  "dowhile_loop", "assignment_statement", "array_definition",
  "array_reference", YY_NULLPTR
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

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,   414,    19,   199,    17,    30,    33,    39,    53,    67,
     533,   538,    70,     6,    55,    47,    60,    -9,    73,  -155,
       2,   101,  -155,  -155,  -155,  -155,  -155,   102,  -155,   103,
    -155,  -155,  -155,  -155,   109,  -155,     3,  -155,  -155,  -155,
    -155,   119,   121,    66,  -155,   125,   113,   126,   135,   149,
     172,   127,   141,   105,    91,   100,   110,   111,   136,  -155,
     247,   294,   325,   331,   356,   362,   387,   393,   412,   424,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,    95,
     153,   414,    95,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
     206,  -155,  -155,   254,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
     161,   147,   433,   533,   538,  -155,  -155,  -155,  -155,  -155,
     137,   152,   160,   165,   227,   227,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,   490,   350,   496,   502,
     -21,   350,  -155,  -155,  -155,  -155,  -155,  -155,  -155,    61,
      63,   169,   166,  -155,    35,    69,   433,   533,   538,  -155,
    -155,  -155,  -155,  -155,   433,   533,   538,  -155,  -155,  -155,
    -155,  -155,   127,  -155,  -155,   164,   176,   178,   196,   197,
     204,   214,   185,   201,   218,   381,   435,   448,   450,   453,
     459,   219,   462,   468,   471,   473,   477,   480,   482,   486,
     491,   495,   500,   504,     1,    12,  -155,   187,   228,   241,
     350,   213,   231,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,   227,   301,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,    16,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,   414,   350,   350,  -155,   265,
     251,   414,  -155,   246,   260,   261,   266,   170,   236,    80,
     282,   283,   280,    95,   131,   414,   414,   414,   414,   350,
      31,   350,    31,   267,  -155,  -155,   281,   302,    75,  -155,
     177,   243,   276,   321,   313,   315,   305,   506,   306,  -155,
    -155,  -155,  -155,  -155,    16,    16,   414,   543,  -155,   414,
     352,   383,  -155,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,    65,    66,    67,    68,    69,     0,     5,     0,
     148,   149,   150,     7,     0,     9,     0,    12,   177,   178,
     179,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,   174,     0,     0,    16,    17,    18,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,   154,   155,   153,   156,   158,   159,   157,     0,
     182,     0,     0,     2,    15,     3,     4,     6,     8,    10,
       0,    11,    13,     0,   176,    20,    21,    22,    29,    30,
      31,    38,    39,    40,    47,    48,    49,    56,    57,    58,
     172,     0,   189,   191,   190,   196,   193,   192,   194,   195,
       0,     0,     0,     0,   166,   166,    23,    24,    25,    32,
      33,    34,    41,    42,    43,    50,    51,    52,    59,    60,
      61,    26,    27,    28,    35,    36,    37,    44,    45,    46,
      53,    54,    55,    62,    63,    64,   136,     0,     0,     0,
     137,     0,   130,   131,   132,   133,   134,   135,   138,     0,
       0,     0,     0,   181,     0,     0,   197,   199,   198,   204,
     201,   200,   202,   203,   205,   207,   206,   212,   209,   208,
     210,   211,   174,   171,   216,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,     0,
     184,     0,     0,   173,   213,   214,   215,   167,   169,   168,
     170,   175,   166,     0,    70,    71,    72,    73,    82,    83,
      84,    85,    94,    95,    96,   103,   104,   105,   112,   113,
     114,   121,   122,   123,     0,    74,    75,    76,    86,    87,
      88,    97,    98,    99,   106,   107,   108,   115,   116,   117,
     124,   125,   126,    77,    78,    79,    89,    90,    91,   100,
     101,   102,   109,   110,   111,   118,   119,   120,   127,   128,
     129,    81,    80,    93,    92,     0,     0,     0,   183,     0,
       0,     0,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,     0,     0,     0,     0,     0,     0,     0,
     144,     0,   145,   146,   142,   143,     0,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   188,
     160,   161,   162,   163,   140,   141,     0,     0,   185,     0,
       0,     0,   147,   180
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   -20,   -79,  -155,  -155,  -155,  -155,  -155,  -155,
     -51,  -155,  -155,  -155,  -155,  -155,  -155,  -154,   -78,  -155,
    -155,  -155,  -155,  -155,  -155,  -120,  -155,   -35,   155,  -155,
     -16,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   237,  -155,
     -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   162,   163,   164,   165,   166,   167,   168,   169,    28,
      29,    30,    31,    32,    33,   202,   203,    34,   111,    35,
      36,    37,    38,   172,   309,   337,    39,    40,    41,    42,
      43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   116,   174,   211,   175,   204,    83,   226,    89,   301,
       3,     4,     5,     6,    71,     7,     8,   117,     9,    44,
     303,   224,   225,     1,   119,    54,    10,    11,    81,   302,
      72,    73,    74,    12,    13,    14,   118,    90,    55,   180,
     304,    56,   188,     3,     4,     5,     6,    57,     7,     8,
      15,     9,    16,    17,    18,   181,   317,   318,   189,    10,
      11,    58,   183,    75,   171,   191,    12,    13,    14,    79,
      45,   228,   229,   231,   182,    59,   308,   190,    70,    76,
      77,    78,    80,    15,   227,    16,    17,    18,     3,     4,
       5,     6,   232,     7,     8,    82,     9,    52,   349,    53,
      93,   228,   229,   156,    10,    11,    85,    86,    87,   228,
     229,    12,    13,    14,    88,   228,   229,   157,   333,   158,
     159,    95,   312,   160,    91,   161,    92,   121,    15,   120,
      16,    17,    18,    94,    98,   110,   122,    96,    97,     3,
       4,     5,     6,   101,     7,     8,   123,     9,   124,   112,
      99,   100,   320,   321,    84,    10,    11,   104,   125,   102,
     103,   170,    12,    13,    14,   113,   114,   192,   339,   115,
     193,   230,   194,   105,   106,   344,   195,   345,   156,    15,
     107,    16,    17,    18,   196,     3,     4,     5,     6,   197,
       7,     8,   329,     9,   158,   159,   108,   109,   160,   234,
     161,    10,    11,    90,   237,   238,    45,   242,    12,    13,
      14,   235,   239,   236,   176,   350,    46,    47,    48,    49,
      50,    51,   240,   241,   305,    15,   319,    16,    17,    18,
     177,   178,   324,    52,   179,    53,   198,   199,   200,   330,
     332,   243,   264,   201,   156,   338,   340,   341,   342,   343,
     306,     3,     4,     5,     6,   126,     7,     8,   331,     9,
     158,   159,   184,   307,   160,   310,   161,    10,    11,   311,
     322,   127,   128,   323,    12,    13,    14,   360,   185,   186,
     361,   351,   187,   325,     3,     4,     5,     6,   336,     7,
       8,    15,     9,    16,    17,    18,   358,   326,   327,    84,
      10,    11,   129,   328,    84,   334,   335,    12,    13,    14,
     313,   314,   315,   316,   352,   347,   346,   173,   130,   131,
      84,    84,    84,    84,    15,   348,    16,    17,    18,     3,
       4,     5,     6,   132,     7,     8,   354,     9,   355,   135,
      84,    84,   356,   359,     0,    10,    11,   233,     0,   133,
     134,     0,    12,    13,    14,   136,   137,     0,   156,   353,
       3,     4,     5,     6,   138,     7,     8,     0,     9,    15,
     141,    16,    17,    18,   158,   159,    10,    11,   160,     0,
     139,   140,     0,    12,    13,    14,   142,   143,     0,   244,
     362,     3,     4,     5,     6,   144,     7,     8,     0,     9,
      15,   147,    16,    17,    18,   245,   246,    10,    11,   247,
       0,   145,   146,     0,    12,    13,    14,   148,   149,     0,
     150,   363,     3,     4,     5,     6,     0,     7,     8,     0,
       9,    15,   153,    16,    17,    18,   151,   152,    10,    11,
      45,     0,     0,   248,     0,    12,    13,    14,   154,   155,
      46,    47,    48,    49,    50,    51,   252,     0,   255,   249,
     250,   258,    15,   251,    16,    17,    18,   261,     0,    53,
     265,     0,   253,   254,   256,   257,   268,   259,   260,   271,
       0,   274,     0,   262,   263,   277,   266,   267,   280,     0,
     283,     0,   269,   270,   286,   272,   273,   275,   276,   289,
       0,   278,   279,   292,   281,   282,   284,   285,   295,     0,
     287,   288,   298,     0,   357,   290,   291,     0,     0,   293,
     294,     0,     0,     0,   296,   297,     0,     0,   299,   300,
      10,    11,   205,   206,   207,   208,   209,   210,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
      20,    52,    81,   157,    82,   125,     4,   161,     5,     8,
       8,     9,    10,    11,     8,    13,    14,    52,    16,     0,
       8,    42,    43,     3,    52,     8,    24,    25,    37,    28,
      24,    25,    26,    31,    32,    33,    52,    34,     8,    90,
      28,     8,    93,     8,     9,    10,    11,     8,    13,    14,
      48,    16,    50,    51,    52,    90,    40,    41,    93,    24,
      25,     8,    90,     8,    80,    93,    31,    32,    33,    22,
       7,    40,    41,    38,    90,     8,   230,    93,     8,    24,
      25,    26,    22,    48,    23,    50,    51,    52,     8,     9,
      10,    11,    23,    13,    14,    22,    16,    34,    23,    36,
      34,    40,    41,     8,    24,    25,     5,     5,     5,    40,
      41,    31,    32,    33,     5,    40,    41,    22,    38,    24,
      25,     8,   242,    28,     5,    30,     5,    36,    48,    24,
      50,    51,    52,     8,     8,     8,    36,    24,    25,     8,
       9,    10,    11,     8,    13,    14,    36,    16,    37,     8,
      24,    25,   306,   307,   174,    24,    25,     8,    22,    24,
      25,     8,    31,    32,    33,    24,    25,     6,    37,    28,
      23,     5,    35,    24,    25,   329,    24,   331,     8,    48,
       8,    50,    51,    52,    24,     8,     9,    10,    11,    24,
      13,    14,    22,    16,    24,    25,    24,    25,    28,    35,
      30,    24,    25,    34,     8,     8,     7,     6,    31,    32,
      33,    35,     8,    35,     8,    38,    17,    18,    19,    20,
      21,    22,     8,    38,    37,    48,   305,    50,    51,    52,
      24,    25,   311,    34,    28,    36,     9,    10,    11,   317,
     318,    23,    23,    16,     8,   323,   325,   326,   327,   328,
      22,     8,     9,    10,    11,     8,    13,    14,    22,    16,
      24,    25,     8,    22,    28,    52,    30,    24,    25,    38,
       5,    24,    25,    22,    31,    32,    33,   356,    24,    25,
     359,    38,    28,    37,     8,     9,    10,    11,     8,    13,
      14,    48,    16,    50,    51,    52,   347,    37,    37,   319,
      24,    25,     8,    37,   324,    23,    23,    31,    32,    33,
       9,    10,    11,    12,    38,    34,    49,    80,    24,    25,
     340,   341,   342,   343,    48,    23,    50,    51,    52,     8,
       9,    10,    11,     8,    13,    14,    23,    16,    23,     8,
     360,   361,    37,    37,    -1,    24,    25,   192,    -1,    24,
      25,    -1,    31,    32,    33,    24,    25,    -1,     8,    38,
       8,     9,    10,    11,     8,    13,    14,    -1,    16,    48,
       8,    50,    51,    52,    24,    25,    24,    25,    28,    -1,
      24,    25,    -1,    31,    32,    33,    24,    25,    -1,     8,
      38,     8,     9,    10,    11,     8,    13,    14,    -1,    16,
      48,     8,    50,    51,    52,    24,    25,    24,    25,    28,
      -1,    24,    25,    -1,    31,    32,    33,    24,    25,    -1,
       8,    38,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    48,     8,    50,    51,    52,    24,    25,    24,    25,
       7,    -1,    -1,     8,    -1,    31,    32,    33,    24,    25,
      17,    18,    19,    20,    21,    22,     8,    -1,     8,    24,
      25,     8,    48,    28,    50,    51,    52,     8,    -1,    36,
       8,    -1,    24,    25,    24,    25,     8,    24,    25,     8,
      -1,     8,    -1,    24,    25,     8,    24,    25,     8,    -1,
       8,    -1,    24,    25,     8,    24,    25,    24,    25,     8,
      -1,    24,    25,     8,    24,    25,    24,    25,     8,    -1,
      24,    25,     8,    -1,     8,    24,    25,    -1,    -1,    24,
      25,    -1,    -1,    -1,    24,    25,    -1,    -1,    24,    25,
      24,    25,    42,    43,    44,    45,    46,    47,    42,    43,
      44,    45,    46,    47,    42,    43,    44,    45,    46,    47,
      17,    18,    19,    20,    21,    17,    18,    19,    20,    21,
      17,    18,    19,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    54,     8,     9,    10,    11,    13,    14,    16,
      24,    25,    31,    32,    33,    48,    50,    51,    52,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    72,    73,
      74,    75,    76,    77,    80,    82,    83,    84,    85,    89,
      90,    91,    92,    93,     0,     7,    17,    18,    19,    20,
      21,    22,    34,    36,     8,     8,     8,     8,     8,     8,
      17,    18,    19,    20,    21,    17,    18,    19,    20,    21,
       8,     8,    24,    25,    26,     8,    24,    25,    26,    22,
      22,    37,    22,     4,    55,     5,     5,     5,     5,     5,
      34,     5,     5,    34,     8,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    81,     8,    24,    25,    28,    63,    80,    83,    93,
      24,    36,    36,    36,    37,    22,     8,    24,    25,     8,
      24,    25,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    24,    25,     8,    24,    25,     8,    22,    24,    25,
      28,    30,    64,    65,    66,    67,    68,    69,    70,    71,
       8,    83,    86,    91,    56,    71,     8,    24,    25,    28,
      63,    80,    83,    93,     8,    24,    25,    28,    63,    80,
      83,    93,     6,    23,    35,    24,    24,    24,     9,    10,
      11,    16,    78,    79,    78,    42,    43,    44,    45,    46,
      47,    70,    42,    43,    44,    45,    46,    47,    42,    43,
      44,    45,    46,    47,    42,    43,    70,    23,    40,    41,
       5,    38,    23,    81,    35,    35,    35,     8,     8,     8,
       8,    38,     6,    23,     8,    24,    25,    28,     8,    24,
      25,    28,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    24,    25,    23,     8,    24,    25,     8,    24,
      25,     8,    24,    25,     8,    24,    25,     8,    24,    25,
       8,    24,    25,     8,    24,    25,     8,    24,    25,     8,
      24,    25,     8,    24,    25,     8,    24,    25,     8,    24,
      25,     8,    28,     8,    28,    37,    22,    22,    70,    87,
      52,    38,    78,     9,    10,    11,    12,    40,    41,    56,
      70,    70,     5,    22,    56,    37,    37,    37,    37,    22,
      71,    22,    71,    38,    23,    23,     8,    88,    71,    37,
      56,    56,    56,    56,    70,    70,    49,    34,    23,    23,
      38,    38,    38,    38,    23,    23,    37,     8,    63,    37,
      56,    56,    38,    38
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
      77,    77,    77,    77,    78,    78,    78,    79,    79,    79,
      79,    80,    81,    81,    81,    82,    83,    84,    84,    84,
      85,    86,    86,    87,    87,    88,    88,    89,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    93
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
       9,     9,     9,     9,     1,     3,     0,     2,     2,     2,
       2,     4,     1,     3,     0,     5,     3,     1,     1,     1,
      11,     1,     0,     1,     0,     3,     0,     7,     8,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     5,     5,     4
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
#line 1676 "parser.tab.c"
    break;

  case 16:
#line 56 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "int")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1682 "parser.tab.c"
    break;

  case 17:
#line 57 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "float")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1688 "parser.tab.c"
    break;

  case 18:
#line 58 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "char")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1694 "parser.tab.c"
    break;

  case 19:
#line 59 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "bool")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1700 "parser.tab.c"
    break;

  case 20:
#line 62 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("1 is numeric %d, 1 defined %d, 3 is numeric %d, 3 is defined %d, 3 is '%s'\n", isNumeric((yyvsp[-2].sval)), symbolExists((yyvsp[-2].sval)), isNumeric((yyvsp[0].sval)), symbolExists((yyvsp[0].sval)), (yyvsp[0].sval)); printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1706 "parser.tab.c"
    break;

  case 21:
#line 63 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1712 "parser.tab.c"
    break;

  case 22:
#line 64 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1718 "parser.tab.c"
    break;

  case 23:
#line 65 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1724 "parser.tab.c"
    break;

  case 24:
#line 66 "parser.y"
                                            {}
#line 1730 "parser.tab.c"
    break;

  case 25:
#line 67 "parser.y"
                                            {}
#line 1736 "parser.tab.c"
    break;

  case 26:
#line 68 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1742 "parser.tab.c"
    break;

  case 27:
#line 69 "parser.y"
                                            {}
#line 1748 "parser.tab.c"
    break;

  case 28:
#line 70 "parser.y"
                                            {}
#line 1754 "parser.tab.c"
    break;

  case 29:
#line 73 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1760 "parser.tab.c"
    break;

  case 30:
#line 74 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1766 "parser.tab.c"
    break;

  case 31:
#line 75 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1772 "parser.tab.c"
    break;

  case 32:
#line 76 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1778 "parser.tab.c"
    break;

  case 33:
#line 77 "parser.y"
                                                {}
#line 1784 "parser.tab.c"
    break;

  case 34:
#line 78 "parser.y"
                                                {}
#line 1790 "parser.tab.c"
    break;

  case 35:
#line 79 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1796 "parser.tab.c"
    break;

  case 36:
#line 80 "parser.y"
                                                {}
#line 1802 "parser.tab.c"
    break;

  case 37:
#line 81 "parser.y"
                                                {}
#line 1808 "parser.tab.c"
    break;

  case 38:
#line 84 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1814 "parser.tab.c"
    break;

  case 39:
#line 85 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1820 "parser.tab.c"
    break;

  case 40:
#line 86 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1826 "parser.tab.c"
    break;

  case 41:
#line 87 "parser.y"
                                                  {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1832 "parser.tab.c"
    break;

  case 42:
#line 88 "parser.y"
                                                  {}
#line 1838 "parser.tab.c"
    break;

  case 43:
#line 89 "parser.y"
                                                  {}
#line 1844 "parser.tab.c"
    break;

  case 44:
#line 90 "parser.y"
                                                  {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1850 "parser.tab.c"
    break;

  case 45:
#line 91 "parser.y"
                                                  {}
#line 1856 "parser.tab.c"
    break;

  case 46:
#line 92 "parser.y"
                                                  {}
#line 1862 "parser.tab.c"
    break;

  case 47:
#line 95 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1868 "parser.tab.c"
    break;

  case 48:
#line 96 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1874 "parser.tab.c"
    break;

  case 49:
#line 97 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1880 "parser.tab.c"
    break;

  case 50:
#line 98 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1886 "parser.tab.c"
    break;

  case 51:
#line 99 "parser.y"
                                            {}
#line 1892 "parser.tab.c"
    break;

  case 52:
#line 100 "parser.y"
                                            {}
#line 1898 "parser.tab.c"
    break;

  case 53:
#line 101 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1904 "parser.tab.c"
    break;

  case 54:
#line 102 "parser.y"
                                            {}
#line 1910 "parser.tab.c"
    break;

  case 55:
#line 103 "parser.y"
                                            {}
#line 1916 "parser.tab.c"
    break;

  case 56:
#line 106 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1922 "parser.tab.c"
    break;

  case 57:
#line 107 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1928 "parser.tab.c"
    break;

  case 58:
#line 108 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1934 "parser.tab.c"
    break;

  case 59:
#line 109 "parser.y"
                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1940 "parser.tab.c"
    break;

  case 60:
#line 110 "parser.y"
                                        {}
#line 1946 "parser.tab.c"
    break;

  case 61:
#line 111 "parser.y"
                                        {}
#line 1952 "parser.tab.c"
    break;

  case 62:
#line 112 "parser.y"
                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1958 "parser.tab.c"
    break;

  case 63:
#line 113 "parser.y"
                                        {}
#line 1964 "parser.tab.c"
    break;

  case 64:
#line 114 "parser.y"
                                        {}
#line 1970 "parser.tab.c"
    break;

  case 70:
#line 124 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1976 "parser.tab.c"
    break;

  case 71:
#line 125 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 1982 "parser.tab.c"
    break;

  case 72:
#line 126 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 1988 "parser.tab.c"
    break;

  case 73:
#line 127 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[-2].sval));}}
#line 1994 "parser.tab.c"
    break;

  case 74:
#line 128 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2000 "parser.tab.c"
    break;

  case 77:
#line 131 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2006 "parser.tab.c"
    break;

  case 81:
#line 135 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && strcmp(getType((yyvsp[0].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[0].sval));}}
#line 2012 "parser.tab.c"
    break;

  case 82:
#line 138 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2018 "parser.tab.c"
    break;

  case 83:
#line 139 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2024 "parser.tab.c"
    break;

  case 84:
#line 140 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2030 "parser.tab.c"
    break;

  case 85:
#line 141 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[-2].sval));}}
#line 2036 "parser.tab.c"
    break;

  case 86:
#line 142 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2042 "parser.tab.c"
    break;

  case 89:
#line 145 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2048 "parser.tab.c"
    break;

  case 93:
#line 149 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && strcmp(getType((yyvsp[0].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, (yyvsp[0].sval));}}
#line 2054 "parser.tab.c"
    break;

  case 94:
#line 152 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2060 "parser.tab.c"
    break;

  case 95:
#line 153 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2066 "parser.tab.c"
    break;

  case 96:
#line 154 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2072 "parser.tab.c"
    break;

  case 97:
#line 155 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2078 "parser.tab.c"
    break;

  case 98:
#line 156 "parser.y"
                                                    {}
#line 2084 "parser.tab.c"
    break;

  case 99:
#line 157 "parser.y"
                                                    {}
#line 2090 "parser.tab.c"
    break;

  case 100:
#line 158 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2096 "parser.tab.c"
    break;

  case 101:
#line 159 "parser.y"
                                                    {}
#line 2102 "parser.tab.c"
    break;

  case 102:
#line 160 "parser.y"
                                                    {}
#line 2108 "parser.tab.c"
    break;

  case 103:
#line 163 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2114 "parser.tab.c"
    break;

  case 104:
#line 164 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2120 "parser.tab.c"
    break;

  case 105:
#line 165 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2126 "parser.tab.c"
    break;

  case 106:
#line 166 "parser.y"
                                                    {{if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}}
#line 2132 "parser.tab.c"
    break;

  case 109:
#line 169 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2138 "parser.tab.c"
    break;

  case 112:
#line 174 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2144 "parser.tab.c"
    break;

  case 113:
#line 175 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2150 "parser.tab.c"
    break;

  case 114:
#line 176 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2156 "parser.tab.c"
    break;

  case 115:
#line 177 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2162 "parser.tab.c"
    break;

  case 118:
#line 180 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2168 "parser.tab.c"
    break;

  case 121:
#line 185 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2174 "parser.tab.c"
    break;

  case 122:
#line 186 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2180 "parser.tab.c"
    break;

  case 123:
#line 187 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2186 "parser.tab.c"
    break;

  case 124:
#line 188 "parser.y"
                                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2192 "parser.tab.c"
    break;

  case 127:
#line 191 "parser.y"
                                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2198 "parser.tab.c"
    break;

  case 130:
#line 196 "parser.y"
                                                {}
#line 2204 "parser.tab.c"
    break;

  case 131:
#line 197 "parser.y"
                                                {}
#line 2210 "parser.tab.c"
    break;

  case 132:
#line 198 "parser.y"
                                                {}
#line 2216 "parser.tab.c"
    break;

  case 133:
#line 199 "parser.y"
                                                {}
#line 2222 "parser.tab.c"
    break;

  case 134:
#line 200 "parser.y"
                                                {}
#line 2228 "parser.tab.c"
    break;

  case 135:
#line 201 "parser.y"
                                                {}
#line 2234 "parser.tab.c"
    break;

  case 136:
#line 202 "parser.y"
                                  {if(symbolExists((yyvsp[0].sval)) && strcmp(getType((yyvsp[0].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'bool' to be used as a conditional expression.\n", line_number, (yyvsp[0].sval));}}
#line 2240 "parser.tab.c"
    break;

  case 146:
#line 216 "parser.y"
                                                                                                    {}
#line 2246 "parser.tab.c"
    break;

  case 147:
#line 217 "parser.y"
                                                                                                                                               {}
#line 2252 "parser.tab.c"
    break;

  case 151:
#line 225 "parser.y"
                    {printf("STDIN");}
#line 2258 "parser.tab.c"
    break;

  case 152:
#line 228 "parser.y"
                                {}
#line 2264 "parser.tab.c"
    break;

  case 153:
#line 229 "parser.y"
                                {}
#line 2270 "parser.tab.c"
    break;

  case 154:
#line 230 "parser.y"
                                {}
#line 2276 "parser.tab.c"
    break;

  case 155:
#line 231 "parser.y"
                                {}
#line 2282 "parser.tab.c"
    break;

  case 156:
#line 234 "parser.y"
                                    {}
#line 2288 "parser.tab.c"
    break;

  case 157:
#line 235 "parser.y"
                                    {}
#line 2294 "parser.tab.c"
    break;

  case 158:
#line 236 "parser.y"
                                    {}
#line 2300 "parser.tab.c"
    break;

  case 159:
#line 237 "parser.y"
                                    {}
#line 2306 "parser.tab.c"
    break;

  case 160:
#line 240 "parser.y"
                                                                                                  {transferFuncParams((yyvsp[-7].sval));}
#line 2312 "parser.tab.c"
    break;

  case 161:
#line 241 "parser.y"
                                                                                                  {transferFuncParams((yyvsp[-7].sval));}
#line 2318 "parser.tab.c"
    break;

  case 162:
#line 242 "parser.y"
                                                                                                  {transferFuncParams((yyvsp[-7].sval));}
#line 2324 "parser.tab.c"
    break;

  case 163:
#line 243 "parser.y"
                                                                                                  {transferFuncParams((yyvsp[-7].sval));}
#line 2330 "parser.tab.c"
    break;

  case 167:
#line 251 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "int") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2336 "parser.tab.c"
    break;

  case 168:
#line 252 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "char") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2342 "parser.tab.c"
    break;

  case 169:
#line 253 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "float") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2348 "parser.tab.c"
    break;

  case 170:
#line 254 "parser.y"
                                  {if(addFuncParam((yyvsp[0].sval), "bool") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, (yyvsp[0].sval));}}
#line 2354 "parser.tab.c"
    break;

  case 171:
#line 257 "parser.y"
                                               {}
#line 2360 "parser.tab.c"
    break;

  case 175:
#line 265 "parser.y"
                                                            {printf("STRUCT DEF (line %d) %s\n", line_number, (yyvsp[-3].sval));}
#line 2366 "parser.tab.c"
    break;

  case 176:
#line 268 "parser.y"
                                   {printf("struct ref %s . %s\n", (yyvsp[-2].sval), (yyvsp[0].sval));}
#line 2372 "parser.tab.c"
    break;

  case 185:
#line 287 "parser.y"
                                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be declared and of numeric type.\n", line_number, (yyvsp[-2].sval));}}
#line 2378 "parser.tab.c"
    break;

  case 189:
#line 298 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && areMatchingTypes((yyvsp[-2].sval),(yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbols '%s' and '%s' must both be declared and of matching types.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2384 "parser.tab.c"
    break;

  case 190:
#line 299 "parser.y"
                                                           {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "float")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'float' to assign an float value.\n", line_number, (yyvsp[-2].sval));}}
#line 2390 "parser.tab.c"
    break;

  case 191:
#line 300 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "int")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'int' to assign an integer value.\n", line_number, (yyvsp[-2].sval));}}
#line 2396 "parser.tab.c"
    break;

  case 192:
#line 301 "parser.y"
                                                               {}
#line 2402 "parser.tab.c"
    break;

  case 193:
#line 302 "parser.y"
                                                                      {}
#line 2408 "parser.tab.c"
    break;

  case 194:
#line 303 "parser.y"
                                                                         {}
#line 2414 "parser.tab.c"
    break;

  case 195:
#line 304 "parser.y"
                                                                 {}
#line 2420 "parser.tab.c"
    break;

  case 196:
#line 305 "parser.y"
                                                         {if(symbolExists((yyvsp[-2].sval)) && strcmp(getType((yyvsp[-2].sval)), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type boolean to assign a boolean value.\n", line_number, (yyvsp[-2].sval));}}
#line 2426 "parser.tab.c"
    break;

  case 197:
#line 306 "parser.y"
                                                                         {}
#line 2432 "parser.tab.c"
    break;

  case 198:
#line 307 "parser.y"
                                                                               {}
#line 2438 "parser.tab.c"
    break;

  case 199:
#line 308 "parser.y"
                                                                             {}
#line 2444 "parser.tab.c"
    break;

  case 200:
#line 309 "parser.y"
                                                                                    {}
#line 2450 "parser.tab.c"
    break;

  case 201:
#line 310 "parser.y"
                                                                                           {}
#line 2456 "parser.tab.c"
    break;

  case 202:
#line 311 "parser.y"
                                                                                              {}
#line 2462 "parser.tab.c"
    break;

  case 203:
#line 312 "parser.y"
                                                                                      {}
#line 2468 "parser.tab.c"
    break;

  case 204:
#line 313 "parser.y"
                                                                              {}
#line 2474 "parser.tab.c"
    break;

  case 205:
#line 314 "parser.y"
                                                                 {}
#line 2480 "parser.tab.c"
    break;

  case 206:
#line 315 "parser.y"
                                                                       {}
#line 2486 "parser.tab.c"
    break;

  case 207:
#line 316 "parser.y"
                                                                     {}
#line 2492 "parser.tab.c"
    break;

  case 208:
#line 317 "parser.y"
                                                                            {}
#line 2498 "parser.tab.c"
    break;

  case 209:
#line 318 "parser.y"
                                                                                   {}
#line 2504 "parser.tab.c"
    break;

  case 210:
#line 319 "parser.y"
                                                                                      {}
#line 2510 "parser.tab.c"
    break;

  case 211:
#line 320 "parser.y"
                                                                              {}
#line 2516 "parser.tab.c"
    break;

  case 212:
#line 321 "parser.y"
                                                                      {}
#line 2522 "parser.tab.c"
    break;


#line 2526 "parser.tab.c"

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
#line 333 "parser.y"


void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
