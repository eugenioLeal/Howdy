%{
#include <stdio.h>  
#include "parser.tab.h"
#include <stdlib.h>
%}

%option noyywrap

%%
"howdy partner" {return(HOWDYPARTNER);}
"so long partner" {return(SOLONGPARTNER);}
%%

int main() {
  yylex();
  return 0;
}
