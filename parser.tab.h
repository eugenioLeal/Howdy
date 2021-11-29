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

#line 116 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
