%{
#include<stdio.h>
int yylex();
void yyerror(char *s);
int yyparse();
%}

%start program
%token HOWDYPARTNER SOLONGPARTNER

%%
program: HOWDYPARTNER SOLONGPARTNER;
%%

void yyerror(char *s) {
  printf("%s\n",s);
}

int main(void) {
  yyparse();
}
