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
extern int yylex(void);
extern int line_number;
void yyerror(char *s);

#include "symbolTable.h"

#line 79 "parser.tab.c"

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
    ADDITION = 270,
    SUBTRACTION = 271,
    MULTIPLICATION = 272,
    DIVISION = 273,
    MOD = 274,
    LPAREN = 275,
    RPAREN = 276,
    INTNUM = 277,
    FLOATNUM = 278,
    CHARLITERAL = 279,
    STRINGLITERAL = 280,
    TRUE = 281,
    FALSE = 282,
    NULLVAL = 283,
    NOT = 284,
    GETS = 285,
    PUTS = 286,
    PUTSLN = 287,
    ASSIGNMENT_OPERATOR = 288,
    LBRACKET = 289,
    RBRACKET = 290,
    LBRACE = 291,
    RBRACE = 292,
    NUMBER = 293,
    AND = 294,
    OR = 295,
    EQUALS = 296,
    NOT_EQUALS = 297,
    LESS_THAN = 298,
    GREATER_THAN = 299,
    LESS_EQUAL = 300,
    GREATER_EQUAL = 301,
    SELECTION_IF = 302,
    SELECTION_ELSE = 303,
    LOOP_FOR = 304,
    LOOP_DOWHILE = 305,
    LOOP_WHILE = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "parser.y"

  int ival;
  float fval;
  char cval;
  char * sval;

#line 190 "parser.tab.c"

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    51,    52,    55,    56,    57,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   115,   116,   117,   118,   119,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   188,   189,   190,   191,   192,   193,   196,
     197,   198,   199,   200,   201,   202,   205,   206,   209,   210,
     211,   214,   217,   218,   219,   220,   223,   224,   225,   226,
     229,   230,   231,   232,   235,   236,   237,   240,   243,   244,
     245,   248,   251,   254,   255,   256,   259,   262,   263,   266,
     267,   270,   271,   274,   277,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   304,   305,   306,   309
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HOWDY_PARTNER", "SO_LONG_PARTNER",
  "SEMI", "COMMA", "DOT", "ID", "INT", "FLOAT", "CHAR", "NUTHIN", "STRUCT",
  "FUNC", "ADDITION", "SUBTRACTION", "MULTIPLICATION", "DIVISION", "MOD",
  "LPAREN", "RPAREN", "INTNUM", "FLOATNUM", "CHARLITERAL", "STRINGLITERAL",
  "TRUE", "FALSE", "NULLVAL", "NOT", "GETS", "PUTS", "PUTSLN",
  "ASSIGNMENT_OPERATOR", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE",
  "NUMBER", "AND", "OR", "EQUALS", "NOT_EQUALS", "LESS_THAN",
  "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "SELECTION_IF",
  "SELECTION_ELSE", "LOOP_FOR", "LOOP_DOWHILE", "LOOP_WHILE", "$accept",
  "program", "statement", "statement_list", "declaration_statement",
  "sum_operation", "sub_operation", "mult_operation", "div_operation",
  "mod_operation", "arithmetic_operation", "equality_expression",
  "inequality_expression", "lessthan_expression", "greaterthan_expression",
  "lessequal_expression", "greaterequal_expression",
  "conditional_expression", "compound_conditional", "selection_statement",
  "std_in_out_statement", "stdin_func", "stdout_func", "stdout_ln_func",
  "function_declaration", "declaration_list", "function_call",
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
     305,   306
};
# endif

#define YYPACT_NINF (-152)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   407,     9,    60,    12,    29,    32,    38,    82,   425,
     493,    91,     8,   172,    92,    98,    75,    99,  -152,     4,
     115,  -152,  -152,  -152,  -152,  -152,   118,  -152,   119,  -152,
    -152,  -152,  -152,   121,  -152,     6,  -152,  -152,  -152,  -152,
     137,   138,   114,  -152,   149,    74,   133,   162,   179,   184,
     151,   189,   139,   129,   132,   140,   157,   148,   205,   230,
     237,   243,   246,   262,   266,   278,   289,   321,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,   126,   188,   407,
     126,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   329,  -152,
    -152,   351,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   197,   183,
      87,   425,   493,  -152,  -152,  -152,  -152,   174,   187,   192,
     198,    63,    63,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,   482,   381,   488,   494,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,   -11,    17,   193,   216,  -152,    34,
      77,    87,   425,   493,  -152,  -152,  -152,  -152,    87,   425,
     493,  -152,  -152,  -152,  -152,   151,  -152,  -152,   191,   212,
     213,   214,   242,   247,   256,   234,   251,   411,   423,   427,
     439,   443,   445,   257,   447,   451,   455,   463,   467,   471,
     473,   475,   479,   483,   491,   495,   231,   260,   261,   381,
     239,   254,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    63,
    -152,   232,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
      -7,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,   407,   381,   381,
    -152,   287,   263,   407,  -152,   273,   274,   277,   282,   143,
     166,    78,   281,   293,   311,   126,   122,   407,   407,   407,
     407,   381,    30,   381,    30,   272,  -152,  -152,   288,   312,
     100,  -152,   168,   226,   285,   317,   320,   324,   302,   499,
     306,  -152,  -152,  -152,  -152,  -152,    -7,    -7,   407,   526,
    -152,   407,   347,   377,  -152,  -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,    64,    65,    66,    67,    68,     0,     5,     0,   138,
     139,   140,     7,     0,     9,     0,    12,   163,   164,   165,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
     160,     0,     0,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,   168,     0,
       0,     2,    15,     3,     4,     6,     8,    10,     0,    11,
      13,     0,   162,    19,    20,    21,    28,    29,    30,    37,
      38,    39,    46,    47,    48,    55,    56,    57,   158,     0,
     175,   177,   176,   179,   178,   180,   181,     0,     0,     0,
       0,   156,   156,    22,    23,    24,    31,    32,    33,    40,
      41,    42,    49,    50,    51,    58,    59,    60,    25,    26,
      27,    34,    35,    36,    43,    44,    45,    52,    53,    54,
      61,    62,    63,     0,     0,     0,     0,   123,   124,   125,
     126,   127,   128,   129,     0,     0,     0,     0,   167,     0,
       0,   182,   184,   183,   186,   185,   187,   188,   189,   191,
     190,   193,   192,   194,   195,   160,   157,   199,     0,     0,
       0,     0,     0,     0,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,   159,   196,   197,   198,    16,    17,    18,   156,
     161,     0,    69,    70,    71,    78,    79,    80,    87,    88,
      89,    96,    97,    98,   105,   106,   107,   114,   115,   116,
       0,    72,    73,    74,    81,    82,    83,    90,    91,    92,
      99,   100,   101,   108,   109,   110,   117,   118,   119,    75,
      76,    77,    84,    85,    86,    93,    94,    95,   102,   103,
     104,   111,   112,   113,   120,   121,   122,     0,     0,     0,
     169,     0,     0,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,     0,     0,     0,     0,     0,
       0,     0,   134,     0,   135,   136,   132,   133,     0,     0,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   174,   150,   151,   152,   153,   130,   131,     0,     0,
     171,     0,     0,     0,   137,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,   -19,   -77,  -116,  -152,  -152,  -152,  -152,  -152,
     -50,  -152,  -152,  -152,  -152,  -152,  -152,  -151,   -76,  -152,
    -152,  -152,  -152,  -152,  -152,  -115,   -30,   161,  -152,   -29,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,   275,  -152,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   157,   158,   159,   160,   161,   162,   163,   164,    27,
      28,    29,    30,    31,    32,   195,    33,   109,    34,    35,
      36,    37,   167,   291,   319,    38,    39,    40,    41,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   113,   169,   203,   170,   194,   194,   196,    81,    43,
     216,    87,     3,     4,     5,     6,    69,     7,     8,    70,
      53,   114,   115,   116,    44,     1,     9,    10,   217,   218,
      71,    72,   299,   300,    11,    12,    13,    54,   174,    88,
      55,   181,     3,     4,     5,     6,    56,     7,     8,   166,
      51,    14,    52,    15,    16,    17,     9,    10,   175,   176,
     177,   182,   183,   184,    11,    12,    13,    44,   290,   217,
     218,   220,   191,   192,   193,    45,    46,    47,    48,    49,
      50,    14,    93,    15,    16,    17,     3,     4,     5,     6,
      57,     7,     8,    51,    44,    52,    94,    95,   221,    68,
       9,    10,    45,    46,    47,    48,    49,    50,    11,    12,
      13,    79,    77,   194,   294,   315,   217,   218,    78,    80,
      83,   331,    52,    84,    85,    14,    86,    15,    16,    17,
       3,     4,     5,     6,   153,     7,     8,   302,   303,   217,
     218,    96,    89,    90,     9,    10,   154,    91,   155,   156,
      82,   153,    11,    12,    13,    97,    98,    92,   321,   108,
     326,   117,   327,   311,   118,   155,   156,   119,   122,    14,
      99,    15,    16,    17,   153,   120,     3,     4,     5,     6,
      73,     7,     8,    74,   100,   101,   313,   102,   155,   156,
       9,    10,   105,   121,    75,    76,   165,   110,    11,    12,
      13,   103,   104,   185,   186,   332,   106,   107,   187,   188,
     301,   111,   112,   123,   189,    14,   306,    15,    16,    17,
     190,   219,   226,   312,   314,   223,    88,   124,   125,   320,
     322,   323,   324,   325,     3,     4,     5,     6,   126,     7,
       8,   295,   296,   297,   298,   129,   224,   225,     9,    10,
     227,   132,   127,   128,   135,   228,    11,    12,    13,   130,
     131,   342,   229,   333,   343,   133,   134,   287,   136,   137,
     138,   230,   231,    14,   141,    15,    16,    17,   250,   340,
     288,   289,    82,   305,   139,   140,   144,    82,   142,   143,
     292,   293,   304,     3,     4,     5,     6,   147,     7,     8,
     145,   146,   316,    82,    82,    82,    82,     9,    10,   307,
     308,   148,   149,   309,   317,    11,    12,    13,   310,   318,
     328,   329,   334,    82,    82,     3,     4,     5,     6,   150,
       7,     8,    14,   330,    15,    16,    17,   171,   338,     9,
      10,   336,   341,   151,   152,   337,   222,    11,    12,    13,
       0,   172,   173,   168,   335,     3,     4,     5,     6,   178,
       7,     8,     0,     0,    14,     0,    15,    16,    17,     9,
      10,     0,     0,   179,   180,     0,     0,    11,    12,    13,
       0,     0,     0,     0,   344,     3,     4,     5,     6,   153,
       7,     8,     0,     0,    14,     0,    15,    16,    17,     9,
      10,     0,     0,   155,   156,     0,     0,    11,    12,    13,
       0,     0,     0,     0,   345,     3,     4,     5,     6,   232,
       7,     8,     0,     0,    14,     0,    15,    16,    17,     9,
      10,   235,     0,   233,   234,   238,     0,    11,    12,    13,
      58,    59,    60,    61,    62,   236,   237,   241,     0,   239,
     240,   244,     0,   247,    14,   251,    15,    16,    17,   254,
       0,   242,   243,   257,     0,   245,   246,   248,   249,   252,
     253,   260,     0,   255,   256,   263,     0,   258,   259,   266,
       0,   269,     0,   272,     0,   261,   262,   275,     0,   264,
     265,   278,     0,   267,   268,   270,   271,   273,   274,   281,
       0,   276,   277,   284,     0,   279,   280,   339,    63,    64,
      65,    66,    67,   282,   283,     0,     0,   285,   286,     0,
       0,     9,    10,   197,   198,   199,   200,   201,   202,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,    45,    46,    47,    48,    49
};

static const yytype_int16 yycheck[] =
{
      19,    51,    79,   154,    80,   121,   122,   122,     4,     0,
      21,     5,     8,     9,    10,    11,     8,    13,    14,    11,
       8,    51,    51,    51,     7,     3,    22,    23,    39,    40,
      22,    23,    39,    40,    30,    31,    32,     8,    88,    33,
       8,    91,     8,     9,    10,    11,     8,    13,    14,    78,
      33,    47,    35,    49,    50,    51,    22,    23,    88,    88,
      88,    91,    91,    91,    30,    31,    32,     7,   219,    39,
      40,    37,     9,    10,    11,    15,    16,    17,    18,    19,
      20,    47,     8,    49,    50,    51,     8,     9,    10,    11,
       8,    13,    14,    33,     7,    35,    22,    23,    21,     8,
      22,    23,    15,    16,    17,    18,    19,    20,    30,    31,
      32,    36,    20,   229,   229,    37,    39,    40,    20,    20,
       5,    21,    35,     5,     5,    47,     5,    49,    50,    51,
       8,     9,    10,    11,     8,    13,    14,   288,   289,    39,
      40,     8,     5,     5,    22,    23,    20,    33,    22,    23,
     169,     8,    30,    31,    32,    22,    23,     8,    36,     8,
     311,    22,   313,    20,    35,    22,    23,    35,    20,    47,
       8,    49,    50,    51,     8,    35,     8,     9,    10,    11,
       8,    13,    14,    11,    22,    23,    20,     8,    22,    23,
      22,    23,     8,    36,    22,    23,     8,     8,    30,    31,
      32,    22,    23,     6,    21,    37,    22,    23,    34,    22,
     287,    22,    23,     8,    22,    47,   293,    49,    50,    51,
      22,     5,     8,   299,   300,    34,    33,    22,    23,   305,
     307,   308,   309,   310,     8,     9,    10,    11,     8,    13,
      14,     9,    10,    11,    12,     8,    34,    34,    22,    23,
       8,     8,    22,    23,     8,     8,    30,    31,    32,    22,
      23,   338,     6,    37,   341,    22,    23,    36,    22,    23,
       8,    37,    21,    47,     8,    49,    50,    51,    21,   329,
      20,    20,   301,    20,    22,    23,     8,   306,    22,    23,
      51,    37,     5,     8,     9,    10,    11,     8,    13,    14,
      22,    23,    21,   322,   323,   324,   325,    22,    23,    36,
      36,    22,    23,    36,    21,    30,    31,    32,    36,     8,
      48,    33,    37,   342,   343,     8,     9,    10,    11,     8,
      13,    14,    47,    21,    49,    50,    51,     8,    36,    22,
      23,    21,    36,    22,    23,    21,   185,    30,    31,    32,
      -1,    22,    23,    78,    37,     8,     9,    10,    11,     8,
      13,    14,    -1,    -1,    47,    -1,    49,    50,    51,    22,
      23,    -1,    -1,    22,    23,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    37,     8,     9,    10,    11,     8,
      13,    14,    -1,    -1,    47,    -1,    49,    50,    51,    22,
      23,    -1,    -1,    22,    23,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    37,     8,     9,    10,    11,     8,
      13,    14,    -1,    -1,    47,    -1,    49,    50,    51,    22,
      23,     8,    -1,    22,    23,     8,    -1,    30,    31,    32,
      15,    16,    17,    18,    19,    22,    23,     8,    -1,    22,
      23,     8,    -1,     8,    47,     8,    49,    50,    51,     8,
      -1,    22,    23,     8,    -1,    22,    23,    22,    23,    22,
      23,     8,    -1,    22,    23,     8,    -1,    22,    23,     8,
      -1,     8,    -1,     8,    -1,    22,    23,     8,    -1,    22,
      23,     8,    -1,    22,    23,    22,    23,    22,    23,     8,
      -1,    22,    23,     8,    -1,    22,    23,     8,    15,    16,
      17,    18,    19,    22,    23,    -1,    -1,    22,    23,    -1,
      -1,    22,    23,    41,    42,    43,    44,    45,    46,    41,
      42,    43,    44,    45,    46,    41,    42,    43,    44,    45,
      46,    15,    16,    17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    53,     8,     9,    10,    11,    13,    14,    22,
      23,    30,    31,    32,    47,    49,    50,    51,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    71,    72,    73,
      74,    75,    76,    78,    80,    81,    82,    83,    87,    88,
      89,    90,    91,     0,     7,    15,    16,    17,    18,    19,
      20,    33,    35,     8,     8,     8,     8,     8,    15,    16,
      17,    18,    19,    15,    16,    17,    18,    19,     8,     8,
      11,    22,    23,     8,    11,    22,    23,    20,    20,    36,
      20,     4,    54,     5,     5,     5,     5,     5,    33,     5,
       5,    33,     8,     8,    22,    23,     8,    22,    23,     8,
      22,    23,     8,    22,    23,     8,    22,    23,     8,    79,
       8,    22,    23,    62,    78,    81,    91,    22,    35,    35,
      35,    36,    20,     8,    22,    23,     8,    22,    23,     8,
      22,    23,     8,    22,    23,     8,    22,    23,     8,    22,
      23,     8,    22,    23,     8,    22,    23,     8,    22,    23,
       8,    22,    23,     8,    20,    22,    23,    63,    64,    65,
      66,    67,    68,    69,    70,     8,    81,    84,    89,    55,
      70,     8,    22,    23,    62,    78,    81,    91,     8,    22,
      23,    62,    78,    81,    91,     6,    21,    34,    22,    22,
      22,     9,    10,    11,    56,    77,    77,    41,    42,    43,
      44,    45,    46,    69,    41,    42,    43,    44,    45,    46,
      41,    42,    43,    44,    45,    46,    21,    39,    40,     5,
      37,    21,    79,    34,    34,    34,     8,     8,     8,     6,
      37,    21,     8,    22,    23,     8,    22,    23,     8,    22,
      23,     8,    22,    23,     8,    22,    23,     8,    22,    23,
      21,     8,    22,    23,     8,    22,    23,     8,    22,    23,
       8,    22,    23,     8,    22,    23,     8,    22,    23,     8,
      22,    23,     8,    22,    23,     8,    22,    23,     8,    22,
      23,     8,    22,    23,     8,    22,    23,    36,    20,    20,
      69,    85,    51,    37,    77,     9,    10,    11,    12,    39,
      40,    55,    69,    69,     5,    20,    55,    36,    36,    36,
      36,    20,    70,    20,    70,    37,    21,    21,     8,    86,
      70,    36,    55,    55,    55,    55,    69,    69,    48,    33,
      21,    21,    37,    37,    37,    37,    21,    21,    36,     8,
      62,    36,    55,    55,    37,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      72,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    78,    79,    79,
      79,    80,    81,    82,    82,    82,    83,    84,    84,    85,
      85,    86,    86,    87,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     2,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       7,     7,     5,     5,     5,     5,     7,    11,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       9,     9,     9,     9,     1,     3,     0,     4,     1,     3,
       0,     5,     3,     1,     1,     1,    11,     1,     0,     1,
       0,     3,     0,     7,     8,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     5,     5,     4
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
#line 36 "parser.y"
                                                      {printSymbolTable();}
#line 1655 "parser.tab.c"
    break;

  case 16:
#line 55 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "int")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1661 "parser.tab.c"
    break;

  case 17:
#line 56 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "float")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1667 "parser.tab.c"
    break;

  case 18:
#line 57 "parser.y"
                                 {if(addToSymbolTable((yyvsp[0].sval), "char")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, (yyvsp[0].sval));}}
#line 1673 "parser.tab.c"
    break;

  case 19:
#line 60 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1679 "parser.tab.c"
    break;

  case 20:
#line 61 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1685 "parser.tab.c"
    break;

  case 21:
#line 62 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1691 "parser.tab.c"
    break;

  case 22:
#line 63 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1697 "parser.tab.c"
    break;

  case 23:
#line 64 "parser.y"
                                            {}
#line 1703 "parser.tab.c"
    break;

  case 24:
#line 65 "parser.y"
                                            {}
#line 1709 "parser.tab.c"
    break;

  case 25:
#line 66 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1715 "parser.tab.c"
    break;

  case 26:
#line 67 "parser.y"
                                            {}
#line 1721 "parser.tab.c"
    break;

  case 27:
#line 68 "parser.y"
                                            {}
#line 1727 "parser.tab.c"
    break;

  case 28:
#line 71 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1733 "parser.tab.c"
    break;

  case 29:
#line 72 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1739 "parser.tab.c"
    break;

  case 30:
#line 73 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1745 "parser.tab.c"
    break;

  case 31:
#line 74 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1751 "parser.tab.c"
    break;

  case 32:
#line 75 "parser.y"
                                                {}
#line 1757 "parser.tab.c"
    break;

  case 33:
#line 76 "parser.y"
                                                {}
#line 1763 "parser.tab.c"
    break;

  case 34:
#line 77 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1769 "parser.tab.c"
    break;

  case 35:
#line 78 "parser.y"
                                                {}
#line 1775 "parser.tab.c"
    break;

  case 36:
#line 79 "parser.y"
                                                {}
#line 1781 "parser.tab.c"
    break;

  case 37:
#line 82 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1787 "parser.tab.c"
    break;

  case 38:
#line 83 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1793 "parser.tab.c"
    break;

  case 39:
#line 84 "parser.y"
                                                  {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1799 "parser.tab.c"
    break;

  case 40:
#line 85 "parser.y"
                                                  {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1805 "parser.tab.c"
    break;

  case 41:
#line 86 "parser.y"
                                                  {}
#line 1811 "parser.tab.c"
    break;

  case 42:
#line 87 "parser.y"
                                                  {}
#line 1817 "parser.tab.c"
    break;

  case 43:
#line 88 "parser.y"
                                                  {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1823 "parser.tab.c"
    break;

  case 44:
#line 89 "parser.y"
                                                  {}
#line 1829 "parser.tab.c"
    break;

  case 45:
#line 90 "parser.y"
                                                  {}
#line 1835 "parser.tab.c"
    break;

  case 46:
#line 93 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1841 "parser.tab.c"
    break;

  case 47:
#line 94 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1847 "parser.tab.c"
    break;

  case 48:
#line 95 "parser.y"
                                            {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1853 "parser.tab.c"
    break;

  case 49:
#line 96 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1859 "parser.tab.c"
    break;

  case 50:
#line 97 "parser.y"
                                            {}
#line 1865 "parser.tab.c"
    break;

  case 51:
#line 98 "parser.y"
                                            {}
#line 1871 "parser.tab.c"
    break;

  case 52:
#line 99 "parser.y"
                                            {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1877 "parser.tab.c"
    break;

  case 53:
#line 100 "parser.y"
                                            {}
#line 1883 "parser.tab.c"
    break;

  case 54:
#line 101 "parser.y"
                                            {}
#line 1889 "parser.tab.c"
    break;

  case 55:
#line 104 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[-2].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1895 "parser.tab.c"
    break;

  case 56:
#line 105 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1901 "parser.tab.c"
    break;

  case 57:
#line 106 "parser.y"
                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[-2].sval));}}
#line 1907 "parser.tab.c"
    break;

  case 58:
#line 107 "parser.y"
                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1913 "parser.tab.c"
    break;

  case 59:
#line 108 "parser.y"
                                        {}
#line 1919 "parser.tab.c"
    break;

  case 60:
#line 109 "parser.y"
                                        {}
#line 1925 "parser.tab.c"
    break;

  case 61:
#line 110 "parser.y"
                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, (yyvsp[0].sval));}}
#line 1931 "parser.tab.c"
    break;

  case 62:
#line 111 "parser.y"
                                        {}
#line 1937 "parser.tab.c"
    break;

  case 63:
#line 112 "parser.y"
                                        {}
#line 1943 "parser.tab.c"
    break;

  case 69:
#line 122 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && !areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1949 "parser.tab.c"
    break;

  case 70:
#line 123 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 1955 "parser.tab.c"
    break;

  case 71:
#line 124 "parser.y"
                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 1961 "parser.tab.c"
    break;

  case 72:
#line 125 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 1967 "parser.tab.c"
    break;

  case 75:
#line 128 "parser.y"
                                                {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 1973 "parser.tab.c"
    break;

  case 78:
#line 133 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && !areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 1979 "parser.tab.c"
    break;

  case 79:
#line 134 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 1985 "parser.tab.c"
    break;

  case 80:
#line 135 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 1991 "parser.tab.c"
    break;

  case 81:
#line 136 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 1997 "parser.tab.c"
    break;

  case 84:
#line 139 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2003 "parser.tab.c"
    break;

  case 87:
#line 144 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && !areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2009 "parser.tab.c"
    break;

  case 88:
#line 145 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2015 "parser.tab.c"
    break;

  case 89:
#line 146 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2021 "parser.tab.c"
    break;

  case 90:
#line 147 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2027 "parser.tab.c"
    break;

  case 91:
#line 148 "parser.y"
                                                    {}
#line 2033 "parser.tab.c"
    break;

  case 92:
#line 149 "parser.y"
                                                    {}
#line 2039 "parser.tab.c"
    break;

  case 93:
#line 150 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2045 "parser.tab.c"
    break;

  case 94:
#line 151 "parser.y"
                                                    {}
#line 2051 "parser.tab.c"
    break;

  case 95:
#line 152 "parser.y"
                                                    {}
#line 2057 "parser.tab.c"
    break;

  case 96:
#line 155 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && !areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2063 "parser.tab.c"
    break;

  case 97:
#line 156 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2069 "parser.tab.c"
    break;

  case 98:
#line 157 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2075 "parser.tab.c"
    break;

  case 99:
#line 158 "parser.y"
                                                    {{if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}}
#line 2081 "parser.tab.c"
    break;

  case 102:
#line 161 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2087 "parser.tab.c"
    break;

  case 105:
#line 166 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && !areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2093 "parser.tab.c"
    break;

  case 106:
#line 167 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2099 "parser.tab.c"
    break;

  case 107:
#line 168 "parser.y"
                                                    {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2105 "parser.tab.c"
    break;

  case 108:
#line 169 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2111 "parser.tab.c"
    break;

  case 111:
#line 172 "parser.y"
                                                    {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2117 "parser.tab.c"
    break;

  case 114:
#line 177 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && symbolExists((yyvsp[0].sval)) && !areMatchingTypes((yyvsp[-2].sval), (yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, (yyvsp[-2].sval), (yyvsp[0].sval));}}
#line 2123 "parser.tab.c"
    break;

  case 115:
#line 178 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[-2].sval));}}
#line 2129 "parser.tab.c"
    break;

  case 116:
#line 179 "parser.y"
                                                        {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[-2].sval));}}
#line 2135 "parser.tab.c"
    break;

  case 117:
#line 180 "parser.y"
                                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, (yyvsp[0].sval));}}
#line 2141 "parser.tab.c"
    break;

  case 120:
#line 183 "parser.y"
                                                        {if(symbolExists((yyvsp[0].sval)) && isNumeric((yyvsp[0].sval))){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, (yyvsp[0].sval));}}
#line 2147 "parser.tab.c"
    break;

  case 123:
#line 188 "parser.y"
                                                {}
#line 2153 "parser.tab.c"
    break;

  case 124:
#line 189 "parser.y"
                                                {}
#line 2159 "parser.tab.c"
    break;

  case 125:
#line 190 "parser.y"
                                                {}
#line 2165 "parser.tab.c"
    break;

  case 126:
#line 191 "parser.y"
                                                {}
#line 2171 "parser.tab.c"
    break;

  case 127:
#line 192 "parser.y"
                                                {}
#line 2177 "parser.tab.c"
    break;

  case 128:
#line 193 "parser.y"
                                                {}
#line 2183 "parser.tab.c"
    break;

  case 136:
#line 205 "parser.y"
                                                                                                    {}
#line 2189 "parser.tab.c"
    break;

  case 137:
#line 206 "parser.y"
                                                                                                                                               {}
#line 2195 "parser.tab.c"
    break;

  case 141:
#line 214 "parser.y"
                    {printf("STDIN");}
#line 2201 "parser.tab.c"
    break;

  case 142:
#line 217 "parser.y"
                              {}
#line 2207 "parser.tab.c"
    break;

  case 143:
#line 218 "parser.y"
                              {}
#line 2213 "parser.tab.c"
    break;

  case 144:
#line 219 "parser.y"
                              {}
#line 2219 "parser.tab.c"
    break;

  case 145:
#line 220 "parser.y"
                              {}
#line 2225 "parser.tab.c"
    break;

  case 146:
#line 223 "parser.y"
                                  {}
#line 2231 "parser.tab.c"
    break;

  case 147:
#line 224 "parser.y"
                                  {}
#line 2237 "parser.tab.c"
    break;

  case 148:
#line 225 "parser.y"
                                  {}
#line 2243 "parser.tab.c"
    break;

  case 149:
#line 226 "parser.y"
                                  {}
#line 2249 "parser.tab.c"
    break;

  case 150:
#line 229 "parser.y"
                                                                                                  {printf("Function %s of type int and arguments %s\n", (yyvsp[-7].sval), "___");}
#line 2255 "parser.tab.c"
    break;

  case 151:
#line 230 "parser.y"
                                                                                                  {printf("Function %s of type float and arguments %s\n", (yyvsp[-7].sval), "___");}
#line 2261 "parser.tab.c"
    break;

  case 152:
#line 231 "parser.y"
                                                                                                  {printf("Function %s of type char and arguments %s\n", (yyvsp[-7].sval), "___");}
#line 2267 "parser.tab.c"
    break;

  case 153:
#line 232 "parser.y"
                                                                                                  {printf("Function %s of type void and arguments %s\n", (yyvsp[-7].sval), "___");}
#line 2273 "parser.tab.c"
    break;

  case 157:
#line 240 "parser.y"
                                               {}
#line 2279 "parser.tab.c"
    break;

  case 161:
#line 248 "parser.y"
                                                            {printf("STRUCT DEF %s\n", line_number, (yyvsp[-3].sval));}
#line 2285 "parser.tab.c"
    break;

  case 162:
#line 251 "parser.y"
                                   {printf("struct ref %s - %s - %s\n", (yyvsp[-2].sval), "___", (yyvsp[0].sval));}
#line 2291 "parser.tab.c"
    break;

  case 171:
#line 270 "parser.y"
                                                                {if(symbolExists((yyvsp[-2].sval)) && isNumeric((yyvsp[-2].sval))){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be declared and of numeric type.\n", line_number, (yyvsp[-2].sval));}}
#line 2297 "parser.tab.c"
    break;

  case 175:
#line 281 "parser.y"
                                                    {printf("%s holds %s\n", (yyvsp[-2].sval), (yyvsp[0].sval));}
#line 2303 "parser.tab.c"
    break;

  case 176:
#line 282 "parser.y"
                                                           {}
#line 2309 "parser.tab.c"
    break;

  case 177:
#line 283 "parser.y"
                                                        {}
#line 2315 "parser.tab.c"
    break;

  case 178:
#line 284 "parser.y"
                                                               {}
#line 2321 "parser.tab.c"
    break;

  case 179:
#line 285 "parser.y"
                                                                      {}
#line 2327 "parser.tab.c"
    break;

  case 180:
#line 286 "parser.y"
                                                                         {}
#line 2333 "parser.tab.c"
    break;

  case 181:
#line 287 "parser.y"
                                                                 {}
#line 2339 "parser.tab.c"
    break;

  case 182:
#line 288 "parser.y"
                                                                         {}
#line 2345 "parser.tab.c"
    break;

  case 183:
#line 289 "parser.y"
                                                                               {}
#line 2351 "parser.tab.c"
    break;

  case 184:
#line 290 "parser.y"
                                                                             {}
#line 2357 "parser.tab.c"
    break;

  case 185:
#line 291 "parser.y"
                                                                                    {}
#line 2363 "parser.tab.c"
    break;

  case 186:
#line 292 "parser.y"
                                                                                           {}
#line 2369 "parser.tab.c"
    break;

  case 187:
#line 293 "parser.y"
                                                                                              {}
#line 2375 "parser.tab.c"
    break;

  case 188:
#line 294 "parser.y"
                                                                                      {}
#line 2381 "parser.tab.c"
    break;

  case 189:
#line 295 "parser.y"
                                                                 {}
#line 2387 "parser.tab.c"
    break;

  case 190:
#line 296 "parser.y"
                                                                       {}
#line 2393 "parser.tab.c"
    break;

  case 191:
#line 297 "parser.y"
                                                                     {}
#line 2399 "parser.tab.c"
    break;

  case 192:
#line 298 "parser.y"
                                                                            {}
#line 2405 "parser.tab.c"
    break;

  case 193:
#line 299 "parser.y"
                                                                                   {}
#line 2411 "parser.tab.c"
    break;

  case 194:
#line 300 "parser.y"
                                                                                      {}
#line 2417 "parser.tab.c"
    break;

  case 195:
#line 301 "parser.y"
                                                                              {}
#line 2423 "parser.tab.c"
    break;


#line 2427 "parser.tab.c"

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
#line 313 "parser.y"


void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
