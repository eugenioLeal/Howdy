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
    ID = 262,
    INT = 263,
    FLOAT = 264,
    CHAR = 265,
    NUTHIN = 266,
    STRUCT = 267,
    FUNC = 268,
    ADDITION = 269,
    SUBTRACTION = 270,
    MULTIPLICATION = 271,
    DIVISION = 272,
    MOD = 273,
    LPAREN = 274,
    RPAREN = 275,
    INTNUM = 276,
    FLOATNUM = 277,
    TRUE = 278,
    FALSE = 279,
    NOT = 280,
    GETS = 281,
    PUTS = 282,
    PUTSLN = 283,
    ASSIGNMENT_OPERATOR = 284,
    LBRACKET = 285,
    RBRACKET = 286,
    LBRACE = 287,
    RBRACE = 288,
    NUMBER = 289,
    AND = 290,
    OR = 291,
    EQUALS = 292,
    NOT_EQUALS = 293,
    LESS_THAN = 294,
    GREATER_THAN = 295,
    LESS_EQUAL = 296,
    GREATER_EQUAL = 297,
    SELECTION_IF = 298,
    SELECTION_ELSE = 299,
    LOOP_FOR = 300,
    LOOP_DOWHILE = 301,
    LOOP_WHILE = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
