/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 117 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
