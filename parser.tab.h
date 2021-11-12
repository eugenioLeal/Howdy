/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     HOWDY_PARTNER = 258,
     SO_LONG_PARTNER = 259,
     SEMI = 260,
     ID = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     NUTHIN = 265,
     STRUCT = 266,
     ADDITION = 267,
     SUBTRACTION = 268,
     MULTIPLICATION = 269,
     DIVISION = 270,
     MOD = 271,
     LPAREN = 272,
     RPAREN = 273,
     ASSIGNMENT_OPERATOR = 274,
     LBRACKET = 275,
     RBRACKET = 276,
     NUMBER = 277,
     AND = 278,
     OR = 279,
     EQUALS = 280,
     NOT_EQUALS = 281,
     LESS_THAN = 282,
     GREATER_THAN = 283,
     LESS_EQUAL = 284,
     GREATER_EQUAL = 285
   };
#endif
/* Tokens.  */
#define HOWDY_PARTNER 258
#define SO_LONG_PARTNER 259
#define SEMI 260
#define ID 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define NUTHIN 265
#define STRUCT 266
#define ADDITION 267
#define SUBTRACTION 268
#define MULTIPLICATION 269
#define DIVISION 270
#define MOD 271
#define LPAREN 272
#define RPAREN 273
#define ASSIGNMENT_OPERATOR 274
#define LBRACKET 275
#define RBRACKET 276
#define NUMBER 277
#define AND 278
#define OR 279
#define EQUALS 280
#define NOT_EQUALS 281
#define LESS_THAN 282
#define GREATER_THAN 283
#define LESS_EQUAL 284
#define GREATER_EQUAL 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
