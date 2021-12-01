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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "parser.y"
{
  int ival;
  float fval;
  char cval;
  char * sval;
}
/* Line 1529 of yacc.c.  */
#line 160 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

