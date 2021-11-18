%{
#include<stdio.h>
extern int yylex(void);
extern int line_number;
void yyerror(char *s);
%}

%start program
%token HOWDY_PARTNER SO_LONG_PARTNER
%token SEMI COMMA DOT
%token ID INT FLOAT CHAR NUTHIN STRUCT FUNC
%token ADDITION SUBTRACTION MULTIPLICATION DIVISION MOD LPAREN RPAREN
%token INTNUM FLOATNUM CHARLITERAL STRINGLITERAL
%token TRUE FALSE
%token NOT 
%token GETS PUTS PUTSLN
%token ASSIGNMENT_OPERATOR LBRACKET RBRACKET LBRACE RBRACE NUMBER AND OR EQUALS NOT_EQUALS LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token SELECTION_IF SELECTION_ELSE
%token LOOP_FOR LOOP_DOWHILE LOOP_WHILE

%%
program: HOWDY_PARTNER statement_list SO_LONG_PARTNER {printf("Yeeeehaw!");}

statement: declaration_statement SEMI
          | arithmetic_operation SEMI
          | selection_statement
          | std_in_out_statement SEMI
          | function_declaration
          | function_call SEMI
          | struct_definition
          | struct_member_reference SEMI
          | assignment_statement SEMI
          | iteration_statment
          | array_definition SEMI
          ;

statement_list: statement
              | statement_list statement

declaration_statement: INT ID     {printf("int\n");}
                    | FLOAT ID   {printf("float\n");}
                    | CHAR ID    {printf("char\n");}
                    ;


sum_operation: ID ADDITION ID               {printf("ID + ID\n");}
              | ID ADDITION INTNUM          {printf("ID + INT\n");}
              | ID ADDITION FLOATNUM        {printf("ID + FLOAT\n");}
              | INTNUM ADDITION ID          {printf("INT + ID\n");}
              | INTNUM ADDITION INTNUM      {printf("INT + INT\n");}
              | INTNUM ADDITION FLOATNUM    {printf("INT + FLOAT\n");}
              | FLOATNUM ADDITION ID        {printf("FLOAT + ID\n");}  
              | FLOATNUM ADDITION INTNUM    {printf("FLOAT + INT\n");}
              | FLOATNUM ADDITION FLOATNUM  {printf("FLOAT + FLOAT\n");}
              ;

sub_operation: ID SUBTRACTION ID                {printf("ID - ID\n");}
              | ID SUBTRACTION INTNUM           {printf("ID - INTNUM\n");}
              | ID SUBTRACTION FLOATNUM         {printf("ID - FLOATNUM\n");}
              | INTNUM SUBTRACTION ID           {printf("INTNUM - ID\n");}
              | INTNUM SUBTRACTION INTNUM       {printf("INTNUM - INTNUM\n");}
              | INTNUM SUBTRACTION FLOATNUM     {printf("INTNUM - FLOATNUM\n");}
              | FLOATNUM SUBTRACTION ID         {printf("FLOATNUM - ID\n");}
              | FLOATNUM SUBTRACTION INTNUM     {printf("FLOATNUM - INTNUM\n");}
              | FLOATNUM SUBTRACTION FLOATNUM   {printf("FLOATNUM - FLOATNUM\n");}
              ;

mult_operation: ID MULTIPLICATION ID              {printf("ID * ID\n");}
              | ID MULTIPLICATION INTNUM          {printf("ID * INTNUM\n");}
              | ID MULTIPLICATION FLOATNUM        {printf("ID * FLOATNUM\n");}
              | INTNUM MULTIPLICATION ID          {printf("INTNUM * ID\n");}
              | INTNUM MULTIPLICATION INTNUM      {printf("INTNUM * INTNUM\n");}
              | INTNUM MULTIPLICATION FLOATNUM    {printf("INTNUM * FLOATNUM\n");}
              | FLOATNUM MULTIPLICATION ID        {printf("FLOATNUM * ID\n");}
              | FLOATNUM MULTIPLICATION INTNUM    {printf("FLOATNUM * INTNUM\n");}
              | FLOATNUM MULTIPLICATION FLOATNUM  {printf("FLOATNUM * FLOATNUM\n");}
              ;

div_operation: ID DIVISION ID               {printf("ID / ID\n");}
              | ID DIVISION INTNUM          {printf("ID / INTNUM\n");}
              | ID DIVISION FLOATNUM        {printf("ID / FLOATNUM\n");}
              | INTNUM DIVISION ID          {printf("INTNUM / ID\n");}
              | INTNUM DIVISION INTNUM      {printf("INTNUM / INTNUM\n");}
              | INTNUM DIVISION FLOATNUM    {printf("INTNUM / FLOATNUM\n");}
              | FLOATNUM DIVISION ID        {printf("FLOATNUM / ID\n");}
              | FLOATNUM DIVISION INTNUM    {printf("FLOATNUM / INTNUM\n");}
              | FLOATNUM DIVISION FLOATNUM  {printf("FLOATNUM / FLOATNUM\n");}
              ;

mod_operation: ID MOD ID                {printf("ID MOD ID\n");}
              | ID MOD INTNUM           {printf("ID MOD INTNUM\n");}
              | ID MOD FLOATNUM         {printf("ID MOD FLOATNUM\n");}
              | INTNUM MOD ID           {printf("INTNUM MOD ID\n");}
              | INTNUM MOD INTNUM       {printf("INTNUM MOD INTNUM\n");}
              | INTNUM MOD FLOATNUM     {printf("INTNUM MOD FLOATNUM\n");}
              | FLOATNUM MOD ID         {printf("FLOATNUM MOD ID\n");}
              | FLOATNUM MOD INTNUM     {printf("FLOATNUM MOD INTNUM\n");}
              | FLOATNUM MOD FLOATNUM   {printf("FLOATNUM MOD FLOATNUM\n");}
              ;

arithmetic_operation: sum_operation
                    | sub_operation
                    | mult_operation
                    | div_operation
                    | mod_operation
                    ;

equality_expression: ID EQUALS ID
                    | ID EQUALS INTNUM
                    | ID EQUALS FLOATNUM
                    | INTNUM EQUALS ID
                    | INTNUM EQUALS INTNUM
                    | INTNUM EQUALS FLOATNUM
                    | FLOATNUM EQUALS ID
                    | FLOATNUM EQUALS INTNUM
                    | FLOATNUM EQUALS FLOATNUM
                    ;

inequality_expression: ID NOT_EQUALS ID
                    | ID NOT_EQUALS INTNUM
                    | ID NOT_EQUALS FLOATNUM
                    | INTNUM NOT_EQUALS ID
                    | INTNUM NOT_EQUALS INTNUM
                    | INTNUM NOT_EQUALS FLOATNUM
                    | FLOATNUM NOT_EQUALS ID
                    | FLOATNUM NOT_EQUALS INTNUM
                    | FLOATNUM NOT_EQUALS FLOATNUM
                    ;

lessthan_expression: ID LESS_THAN ID
                    | ID LESS_THAN INTNUM
                    | ID LESS_THAN FLOATNUM
                    | INTNUM LESS_THAN ID
                    | INTNUM LESS_THAN INTNUM
                    | INTNUM LESS_THAN FLOATNUM
                    | FLOATNUM LESS_THAN ID
                    | FLOATNUM LESS_THAN INTNUM
                    | FLOATNUM LESS_THAN FLOATNUM
                    ;

greaterthan_expression: ID GREATER_THAN ID
                    | ID GREATER_THAN INTNUM
                    | ID GREATER_THAN FLOATNUM
                    | INTNUM GREATER_THAN ID
                    | INTNUM GREATER_THAN INTNUM
                    | INTNUM GREATER_THAN FLOATNUM
                    | FLOATNUM GREATER_THAN ID
                    | FLOATNUM GREATER_THAN INTNUM
                    | FLOATNUM GREATER_THAN FLOATNUM
                    ;

lessequal_expression: ID LESS_EQUAL ID
                    | ID LESS_EQUAL INTNUM
                    | ID LESS_EQUAL FLOATNUM
                    | INTNUM LESS_EQUAL ID
                    | INTNUM LESS_EQUAL INTNUM
                    | INTNUM LESS_EQUAL FLOATNUM
                    | FLOATNUM LESS_EQUAL ID
                    | FLOATNUM LESS_EQUAL INTNUM
                    | FLOATNUM LESS_EQUAL FLOATNUM
                    ;

greaterequal_expression: ID GREATER_EQUAL ID
                    | ID GREATER_EQUAL INTNUM
                    | ID GREATER_EQUAL FLOATNUM
                    | INTNUM GREATER_EQUAL ID
                    | INTNUM GREATER_EQUAL INTNUM
                    | INTNUM GREATER_EQUAL FLOATNUM
                    | FLOATNUM GREATER_EQUAL ID
                    | FLOATNUM GREATER_EQUAL INTNUM
                    | FLOATNUM GREATER_EQUAL FLOATNUM
                    ;

conditional_expression: equality_expression    {printf("IF = \n");}
                      | inequality_expression  {printf("IF != \n");}
                      | lessthan_expression    {printf("IF < \n");}
                      | greaterthan_expression {printf("IF > \n");}
                      | lessequal_expression   {printf("IF <= \n");}
                      | greaterequal_expression {printf("IF >= \n");}
                      ;

compound_conditional: LPAREN conditional_expression RPAREN AND LPAREN conditional_expression RPAREN
                    | LPAREN conditional_expression RPAREN OR LPAREN conditional_expression RPAREN
                    | compound_conditional AND LPAREN conditional_expression RPAREN
                    | compound_conditional OR LPAREN conditional_expression RPAREN
                    | LPAREN conditional_expression RPAREN AND compound_conditional
                    | LPAREN conditional_expression RPAREN OR compound_conditional
                    ;

selection_statement: SELECTION_IF LPAREN compound_conditional RPAREN LBRACE statement_list RBRACE   {printf("SIMPLE IF\n");}
                    | SELECTION_IF LPAREN compound_conditional RPAREN LBRACE statement_list RBRACE SELECTION_ELSE LBRACE statement_list RBRACE {printf("IF ELSE IF\n");}

std_in_out_statement: stdin_func      {printf("GETS\n");}
                    | stdout_func     {printf("PUTS\n");}
                    | stdout_ln_func  {printf("PUTSLN\n");}
                    ;

stdin_func: GETS ID
          ;

stdout_func: PUTS ID
            | PUTS CHAR
            | PUTS INTNUM
            | PUTS FLOATNUM
            ;

stdout_ln_func: PUTSLN ID
              | PUTSLN CHAR
              | PUTSLN INTNUM
              | PUTSLN FLOATNUM
              ;

function_declaration: FUNC ID LPAREN declaration_list RPAREN INT LBRACE statement_list RBRACE
                    | FUNC ID LPAREN declaration_list RPAREN FLOAT LBRACE statement_list RBRACE
                    | FUNC ID LPAREN declaration_list RPAREN CHAR LBRACE statement_list RBRACE
                    | FUNC ID LPAREN declaration_list RPAREN NUTHIN LBRACE statement_list RBRACE
                    ;

declaration_list: declaration_statement
                | declaration_statement COMMA declaration_list
                ;

function_call: ID LPAREN parameter_list RPAREN
              ;

parameter_list: ID
              | ID COMMA parameter_list
              ;

struct_definition: STRUCT ID LBRACE declaration_list RBRACE

struct_member_reference: ID DOT ID

iteration_statment: for_loop
                  | while_loop
                  | dowhile_loop
                  ;

for_loop: LOOP_FOR LPAREN optional_assignment SEMI optional_conditional SEMI optional_increment RPAREN LBRACE statement_list RBRACE
        ;

optional_assignment:  assignment_statement
                    |
                    ;

optional_conditional: conditional_expression
                    |
                    ;

optional_increment: ID ASSIGNMENT_OPERATOR arithmetic_operation
                  |
                  ;

while_loop: LOOP_WHILE LPAREN compound_conditional RPAREN RBRACE statement_list LBRACE
          ;

dowhile_loop: LOOP_DOWHILE LBRACE statement_list RBRACE LOOP_WHILE LPAREN compound_conditional RPAREN
            ;


assignment_statement: ID ASSIGNMENT_OPERATOR ID
                    | ID ASSIGNMENT_OPERATOR FLOATNUM
                    | ID ASSIGNMENT_OPERATOR INTNUM
                    | ID ASSIGNMENT_OPERATOR function_call
                    | ID ASSIGNMENT_OPERATOR arithmetic_operation
                    | ID ASSIGNMENT_OPERATOR struct_member_reference
                    | ID ASSIGNMENT_OPERATOR array_reference
                    | struct_member_reference ASSIGNMENT_OPERATOR ID
                    | struct_member_reference ASSIGNMENT_OPERATOR FLOATNUM
                    | struct_member_reference ASSIGNMENT_OPERATOR INTNUM
                    | struct_member_reference ASSIGNMENT_OPERATOR function_call
                    | struct_member_reference ASSIGNMENT_OPERATOR arithmetic_operation
                    | struct_member_reference ASSIGNMENT_OPERATOR struct_member_reference
                    | struct_member_reference ASSIGNMENT_OPERATOR array_reference
                    | array_reference ASSIGNMENT_OPERATOR ID
                    | array_reference ASSIGNMENT_OPERATOR FLOATNUM
                    | array_reference ASSIGNMENT_OPERATOR INTNUM
                    | array_reference ASSIGNMENT_OPERATOR function_call
                    | array_reference ASSIGNMENT_OPERATOR arithmetic_operation
                    | array_reference ASSIGNMENT_OPERATOR struct_member_reference
                    | array_reference ASSIGNMENT_OPERATOR array_reference
                    ;

array_definition: INT ID RBRACKET INTNUM LBRACKET
                | FLOAT ID RBRACKET INTNUM LBRACKET
                | CHAR ID RBRACKET INTNUM LBRACKET
                ;

array_reference: ID RBRACKET INTNUM LBRACKET
                ;

array_literal: LBRACE value_list RBRACE
            ;

value_list: value
          | value_list COMMA value 
          ;

value: INTNUM
      | FLOATNUM
      | CHARLITERAL
      ;



%%

void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
