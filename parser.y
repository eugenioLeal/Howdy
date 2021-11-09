%{
#include<stdio.h>
extern int yylex(void);
extern int line_number;
void yyerror(char *s);
%}

%start program
%token HOWDY_PARTNER SO_LONG_PARTNER
%token SEMI
%token ID INT FLOAT CHAR NUTHIN STRUCT
%token ADDITION SUBTRACTION MULTIPLICATION DIVISION MOD LPAREN RPAREN
%token ASSIGNMENT_OPERATOR LBRACKET RBRACKET NUMBER AND OR EQUALS NOT_EQUALS LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL

%%
program: HOWDY_PARTNER expression_statement SO_LONG_PARTNER {printf("Yeeeehaw!")};

logical_or_expression: logical_and_expression
                        | logical_or_expression OR logical_and_expression;

logical_and_expression: equality_expression
                        | logical_and_expression AND equality_expression;

equality_expression: relational_expression
                      | equality_expression EQUALS relational_expression
                      | equality_expression NOT_EQUALS relational_expression;

relational_expression: additive_expression
                        | relational_expression LESS_THAN additive_expression
                        | relational_expression GREATER_THAN additive_expression
                        | relational_expression LESS_EQUAL additive_expression
                        | relational_expression GREATER_EQUAL additive_expression;

additive_expression: multiplicative_expression
                    | additive_expression ADDITION multiplicative_expression
                    | additive_expression SUBTRACTION multiplicative_expression;

multiplicative_expression: primary_expression
                          | multiplicative_expression MULTIPLICATION primary_expression
                          | multiplicative_expression DIVISION primary_expression
                          | multiplicative_expression MOD primary_expression;

primary_expression: ID | LPAREN expression RPAREN | NUMBER;

expression: logical_or_expression;

expression_statement: expression SEMI | /*empty*/;
%%

void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
