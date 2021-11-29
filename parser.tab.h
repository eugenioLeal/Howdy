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
     BOOL = 265,
     NUTHIN = 266,
     STRUCT = 267,
     ADDITION = 268,
     SUBTRACTION = 269,
     MULTIPLICATION = 270,
     DIVISION = 271,
     MOD = 272,
     LPAREN = 273,
     RPAREN = 274,
     ASSIGNMENT_OPERATOR = 275,
     LBRACKET = 276,
     RBRACKET = 277,
     NUMBER = 278,
     AND = 279,
     OR = 280,
     EQUALS = 281,
     NOT_EQUALS = 282,
     LESS_THAN = 283,
     GREATER_THAN = 284,
     LESS_EQUAL = 285,
     GREATER_EQUAL = 286
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
#define BOOL 265
#define NUTHIN 266
#define STRUCT 267
#define ADDITION 268
#define SUBTRACTION 269
#define MULTIPLICATION 270
#define DIVISION 271
#define MOD 272
#define LPAREN 273
#define RPAREN 274
#define ASSIGNMENT_OPERATOR 275
#define LBRACKET 276
#define RBRACKET 277
#define NUMBER 278
#define AND 279
#define OR 280
#define EQUALS 281
#define NOT_EQUALS 282
#define LESS_THAN 283
#define GREATER_THAN 284
#define LESS_EQUAL 285
#define GREATER_EQUAL 286




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
