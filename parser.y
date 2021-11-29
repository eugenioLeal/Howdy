%{
#include<stdio.h>
#include<stdlib.h>
extern int yylex(void);
extern int line_number;
void yyerror(char *s);
void quit();
%}

%locations
%start program
%token HOWDY_PARTNER SO_LONG_PARTNER
%token SEMI
%token ID INT FLOAT CHAR BOOL NUTHIN STRUCT
%token ADDITION SUBTRACTION MULTIPLICATION DIVISION MOD LPAREN RPAREN
%token ASSIGNMENT_OPERATOR LBRACKET RBRACKET NUMBER AND OR EQUALS NOT_EQUALS LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
// %left AND
// %left OR

%%
program: HOWDY_PARTNER declaration_list SO_LONG_PARTNER {printf("Yeeeehaw!");};
declaration: type_specifier ID {yyerror("Expected semicolon at the end of the statement"); quit();};
declaration: type_specifier ID SEMI ;

declaration_list: declaration | declaration_list declaration;

type_specifier: INT | FLOAT | CHAR | BOOL;

// program: HOWDY_PARTNER expression_statement {yyerror("Expected \"so long partner\" at the end of the program");};
// program: expression_statement SO_LONG_PARTNER {yyerror("Expected \"how long partner\" at the beginning of the program");};
// program: expression_statement {yyerror("Expected HOWDY_PARTNER SO_LONG_PARTNER");};


// logical_or_expression: logical_and_expression
//                         | logical_or_expression OR logical_and_expression;

// logical_and_expression: equality_expression
//                         | logical_and_expression AND equality_expression;

// equality_expression: relational_expression
//                       | equality_expression EQUALS relational_expression
//                       | equality_expression NOT_EQUALS relational_expression;

// relational_expression: additive_expression
//                         | relational_expression LESS_THAN additive_expression
//                         | relational_expression GREATER_THAN additive_expression
//                         | relational_expression LESS_EQUAL additive_expression
//                         | relational_expression GREATER_EQUAL additive_expression;

// additive_expression: multiplicative_expression
//                     | additive_expression ADDITION multiplicative_expression
//                     | additive_expression SUBTRACTION multiplicative_expression;

// multiplicative_expression: primary_expression
//                           | multiplicative_expression MULTIPLICATION primary_expression
//                           | multiplicative_expression DIVISION primary_expression
//                           | multiplicative_expression MOD primary_expression;

// primary_expression: ID | LPAREN expression RPAREN | NUMBER;

// expression: logical_or_expression;

// expression_statement: expression SEMI | /*empty*/;

%%

void quit() {
  printf("\n-------------------------------------------\n\n");
  exit(0);
}

void yyerror(char *s) {
  printf("\nline %d: %s\n",yylloc.first_line,s);
}

int main(void) {
  yyparse();
}
