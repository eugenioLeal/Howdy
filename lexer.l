%{
#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
#include <stdlib.h>
int line_number = 1;
%}

%option noyywrap
int \-?[0-9]+
float \-?[0-9]+\.[0-9]+
id [a-zA-Z][a-zA-Z0-9_]{0,30}
whitespace [ \t]+
char_literal '[0-9a-zA-Z!@#$%^&*()_=<>+/,.?;:\{\}\[\]\"\\-]'
string_literal \"[a-zA-Z!@#$%^&*()_=<>+/,.?;:\{\}\[\]\\-]*\"

%%
"howdy partner" {return(HOWDY_PARTNER);}
"so long partner" {return(SO_LONG_PARTNER);}

"reckon" {return(SELECTION_IF);}
"opposin" {return(SELECTION_ELSE);}
"fer" {return(LOOP_FOR);}
"do" {return(LOOP_DOWHILE);}
"long as" {return(LOOP_WHILE);}

";" {return(SEMI);}
"," {return(COMMA);}
"." {return(DOT);}
"(" {return(LPAREN);}
")" {return(RPAREN);}
"[" {return(LBRACKET);}
"]" {return(RBRACKET);}
"{" {return(LBRACE);}
"}" {return(RBRACE);}


"puh-lus" {return(ADDITION);}
"subtrayct" {return(SUBTRACTION);}
"times" {return(MULTIPLICATION);}
"n'times" {return(DIVISION);}
"%" {return(MOD);}

"holds" {return(ASSIGNMENT_OPERATOR);}

"iz" {return(EQUALS);}
"aint" {return(NOT_EQUALS);}
"kneeHigh" {return(LESS_THAN);}
"tallerest" {return(GREATER_THAN);}
"n'kneeHigh" {return(LESS_EQUAL);}
"n'tallerest" {return(GREATER_EQUAL);}

"and" {return(AND);}
"or" {return(OR);}
"not" {return(NOT);}

"int" {return(INT);}
"float" {return(FLOAT);}
"char" {return(CHAR);}
"nuthin" {return(NUTHIN);}
"struct" {return(STRUCT);}
"func" {return(FUNC);}
"yeehaw" {return(RETURN);}
"liferdeath" {return(BOOL);}

"yeah" {return(BOOLVAL);}
"nah" {return(BOOLVAL);}
"blank" {return(NULLVAL);}

"ahmReadn"			{return(GETS);}
"ahmPrintn"			{return(PUTS);}
"ahmPrintnLine" 	{return(PUTSLN);}

{id} {yylval.sval = (char*) strdup(yytext); return(ID);}
{float} {return(FLOATNUM);}
{int} {return(INTNUM);}
"\n" {line_number++;}
{whitespace} {/*IGNORE*/}
{char_literal} {return(CHARLITERAL);}
{string_literal} {return(STRINGLITERAL);}

. {printf("LEXICAL ERROR: Unrecognized: %s (line %d)\n", yytext, line_number);}

%%
