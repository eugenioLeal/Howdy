%{
#include <stdio.h>  
#include "parser.tab.h"
#include <stdlib.h>
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;
int line_number = 0;
%}
%option yylineno
%option noyywrap
id [a-zA-Z]{0,30}
num [0-9]+

%%
"howdy partner" {return(HOWDY_PARTNER);}
"so long partner" {return(SO_LONG_PARTNER);}
"int" {return(INT);}
"float" {return(FLOAT);}
"char" {return(CHAR);}
"nuthin" {return(NUTHIN);}
"struct" {return(STRUCT);}
"puh-lus" {return(ADDITION);}
"subtrayct" {return(SUBTRACTION);}
"times" {return(MULTIPLICATION);}
"n'times" {return(DIVISION);}
"holds" {return(ASSIGNMENT_OPERATOR);}
"%" {return(MOD);}
"and" {return(AND);}
"or" {return(OR);}
"iz" {return(EQUALS);}
"aint" {return(NOT_EQUALS);}
"kneeHigh" {return(LESS_THAN);}
"tallerest" {return(GREATER_THAN);}
"n'kneeHigh" {return(LESS_EQUAL);}
"n'tallerest" {return(GREATER_EQUAL);}
";" {return(SEMI);}
"(" {return(LPAREN);}
")" {return(RPAREN);}
"[" {return(LBRACKET);}
"]" {return(RBRACKET);}
"\n" {line_number++;}
{id} {return(ID);}
{num} {return(NUMBER);}
%%