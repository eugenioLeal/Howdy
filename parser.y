%{
#include<stdio.h>
#include<string.h>
extern int yylex(void);
extern int line_number;
void yyerror(char *s);

#include "symbolTable.h"
%}

%union{
  int ival;
  float fval;
  char cval;
  char * sval;
}

%type<sval> ID
%type<ival> INTNUM
%type<fval> FLOATNUM
%type<cval> CHARLITERAL

%start program
%token HOWDY_PARTNER SO_LONG_PARTNER
%token SEMI COMMA DOT
%token ID INT FLOAT CHAR NUTHIN STRUCT FUNC RETURN BOOL
%token ADDITION SUBTRACTION MULTIPLICATION DIVISION MOD LPAREN RPAREN
%token INTNUM FLOATNUM CHARLITERAL STRINGLITERAL
%token BOOLVAL NULLVAL
%token NOT 
%token GETS PUTS PUTSLN
%token ASSIGNMENT_OPERATOR LBRACKET RBRACKET LBRACE RBRACE NUMBER AND OR EQUALS NOT_EQUALS LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token SELECTION_IF SELECTION_ELSE
%token LOOP_FOR LOOP_DOWHILE LOOP_WHILE

%%
program: HOWDY_PARTNER statement_list SO_LONG_PARTNER {printSymbolTable();}

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
              ;

declaration_statement: INT ID    {if(addToSymbolTable($2, "int")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, $2);}}
                    | FLOAT ID   {if(addToSymbolTable($2, "float")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, $2);}}
                    | CHAR ID    {if(addToSymbolTable($2, "char")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, $2);}}
                    | BOOL ID    {if(addToSymbolTable($2, "bool")==1){printf("ERROR (line %d): Symbol '%s' is already defined.\n", line_number, $2);}}
                    ;

sum_operation: ID ADDITION ID               {if(symbolExists($1) && symbolExists($3) && isNumeric($1) && isNumeric($3)){}else{printf("1 is numeric %d, 1 defined %d, 3 is numeric %d, 3 is defined %d, 3 is '%s'\n", isNumeric($1), symbolExists($1), isNumeric($3), symbolExists($3), $3); printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, $1, $3);}}
              | ID ADDITION INTNUM          {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | ID ADDITION FLOATNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | INTNUM ADDITION ID          {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | INTNUM ADDITION INTNUM      {}
              | INTNUM ADDITION FLOATNUM    {}
              | FLOATNUM ADDITION ID        {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}  
              | FLOATNUM ADDITION INTNUM    {}
              | FLOATNUM ADDITION FLOATNUM  {}
              ;

sub_operation: ID SUBTRACTION ID                {if(symbolExists($1) && symbolExists($3) && isNumeric($1) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, $1, $3);}}
              | ID SUBTRACTION INTNUM           {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | ID SUBTRACTION FLOATNUM         {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | INTNUM SUBTRACTION ID           {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | INTNUM SUBTRACTION INTNUM       {}
              | INTNUM SUBTRACTION FLOATNUM     {}
              | FLOATNUM SUBTRACTION ID         {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | FLOATNUM SUBTRACTION INTNUM     {}
              | FLOATNUM SUBTRACTION FLOATNUM   {}
              ;

mult_operation: ID MULTIPLICATION ID              {if(symbolExists($1) && symbolExists($3) && isNumeric($1) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, $1, $3);}}
              | ID MULTIPLICATION INTNUM          {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | ID MULTIPLICATION FLOATNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | INTNUM MULTIPLICATION ID          {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | INTNUM MULTIPLICATION INTNUM      {}
              | INTNUM MULTIPLICATION FLOATNUM    {}
              | FLOATNUM MULTIPLICATION ID        {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | FLOATNUM MULTIPLICATION INTNUM    {}
              | FLOATNUM MULTIPLICATION FLOATNUM  {}
              ;

div_operation: ID DIVISION ID               {if(symbolExists($1) && symbolExists($3) && isNumeric($1) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, $1, $3);}}
              | ID DIVISION INTNUM          {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | ID DIVISION FLOATNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | INTNUM DIVISION ID          {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | INTNUM DIVISION INTNUM      {}
              | INTNUM DIVISION FLOATNUM    {}
              | FLOATNUM DIVISION ID        {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | FLOATNUM DIVISION INTNUM    {}
              | FLOATNUM DIVISION FLOATNUM  {}
              ;

mod_operation: ID MOD ID                {if(symbolExists($1) && symbolExists($3) && isNumeric($1) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): the symbol '%s' and '%s' must both be defined and of type 'int' or 'float'.\n", line_number, $1, $3);}}
              | ID MOD INTNUM           {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | ID MOD FLOATNUM         {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $1);}}
              | INTNUM MOD ID           {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | INTNUM MOD INTNUM       {}
              | INTNUM MOD FLOATNUM     {}
              | FLOATNUM MOD ID         {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): symbol '%s' must be of type 'int' or 'float'\n", line_number, $3);}}
              | FLOATNUM MOD INTNUM     {}
              | FLOATNUM MOD FLOATNUM   {}
              ;

arithmetic_operation: sum_operation
                    | sub_operation
                    | mult_operation
                    | div_operation
                    | mod_operation
                    ;

equality_expression: ID EQUALS ID               {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1, $3)){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, $1, $3);}}
                    | ID EQUALS INTNUM          {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $1);}}
                    | ID EQUALS FLOATNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $1);}}
                    | ID EQUALS BOOLVAL         {if(symbolExists($1) && strcmp(getType($1), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, $1);}}
                    | INTNUM EQUALS ID          {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $3);}}
                    | INTNUM EQUALS INTNUM
                    | INTNUM EQUALS FLOATNUM
                    | FLOATNUM EQUALS ID        {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $3);}}
                    | FLOATNUM EQUALS INTNUM
                    | FLOATNUM EQUALS FLOATNUM 
                    | BOOLVAL EQUALS BOOLVAL
                    | BOOLVAL EQUALS ID         {if(symbolExists($3) && strcmp(getType($3), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, $3);}}
                    ;

inequality_expression: ID NOT_EQUALS ID             {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1, $3)){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, $1, $3);}}
                    | ID NOT_EQUALS INTNUM          {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $1);}}
                    | ID NOT_EQUALS FLOATNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $1);}}
                    | ID NOT_EQUALS BOOLVAL         {if(symbolExists($1) && strcmp(getType($1), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, $1);}}
                    | INTNUM NOT_EQUALS ID          {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $3);}}
                    | INTNUM NOT_EQUALS INTNUM
                    | INTNUM NOT_EQUALS FLOATNUM
                    | FLOATNUM NOT_EQUALS ID        {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $3);}}
                    | FLOATNUM NOT_EQUALS INTNUM
                    | FLOATNUM NOT_EQUALS FLOATNUM
                    | BOOLVAL NOT_EQUALS BOOLVAL
                    | BOOLVAL NOT_EQUALS ID         {if(symbolExists($3) && strcmp(getType($3), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol %s must be boolean to be compared with type 'bool'.\n", line_number, $3);}}
                    ;

lessthan_expression: ID LESS_THAN ID                {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1, $3)){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, $1, $3);}}
                    | ID LESS_THAN INTNUM           {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $1);}}   
                    | ID LESS_THAN FLOATNUM         {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $1);}}
                    | INTNUM LESS_THAN ID           {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $3);}}
                    | INTNUM LESS_THAN INTNUM       {}
                    | INTNUM LESS_THAN FLOATNUM     {}
                    | FLOATNUM LESS_THAN ID         {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $3);}}
                    | FLOATNUM LESS_THAN INTNUM     {}
                    | FLOATNUM LESS_THAN FLOATNUM   {}
                    ;

greaterthan_expression: ID GREATER_THAN ID          {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1, $3)){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, $1, $3);}}
                    | ID GREATER_THAN INTNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $1);}}
                    | ID GREATER_THAN FLOATNUM      {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $1);}}
                    | INTNUM GREATER_THAN ID        {{if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $3);}}}
                    | INTNUM GREATER_THAN INTNUM
                    | INTNUM GREATER_THAN FLOATNUM
                    | FLOATNUM GREATER_THAN ID      {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $3);}}
                    | FLOATNUM GREATER_THAN INTNUM
                    | FLOATNUM GREATER_THAN FLOATNUM
                    ;

lessequal_expression: ID LESS_EQUAL ID              {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1, $3)){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, $1, $3);}}
                    | ID LESS_EQUAL INTNUM          {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $1);}}
                    | ID LESS_EQUAL FLOATNUM        {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $1);}}
                    | INTNUM LESS_EQUAL ID          {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $3);}}
                    | INTNUM LESS_EQUAL INTNUM
                    | INTNUM LESS_EQUAL FLOATNUM
                    | FLOATNUM LESS_EQUAL ID        {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $3);}}
                    | FLOATNUM LESS_EQUAL INTNUM
                    | FLOATNUM LESS_EQUAL FLOATNUM  
                    ;

greaterequal_expression: ID GREATER_EQUAL ID            {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1, $3)){}else{printf("TYPE ERROR (line %d): symbols '%s' and '%s' must be compatible types to be compared.\n", line_number, $1, $3);}}
                    | ID GREATER_EQUAL INTNUM           {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $1);}}
                    | ID GREATER_EQUAL FLOATNUM         {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $1);}}
                    | INTNUM GREATER_EQUAL ID           {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'int'.\n", line_number, $3);}}
                    | INTNUM GREATER_EQUAL INTNUM
                    | INTNUM GREATER_EQUAL FLOATNUM
                    | FLOATNUM GREATER_EQUAL ID         {if(symbolExists($3) && isNumeric($3)){}else{printf("TYPE ERROR (line %d): Symbol %s must be numeric to be compared with type 'float'.\n", line_number, $3);}}
                    | FLOATNUM GREATER_EQUAL INTNUM
                    | FLOATNUM GREATER_EQUAL FLOATNUM   
                    ;

conditional_expression: equality_expression     {}
                      | inequality_expression   {}
                      | lessthan_expression     {}
                      | greaterthan_expression  {}
                      | lessequal_expression    {}
                      | greaterequal_expression {}
                      | ID        {if(symbolExists($1) && strcmp(getType($1), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'bool' to be used as a conditional expression.\n", line_number, $1);}}
                      | BOOLVAL
                      ;

compound_conditional: conditional_expression 
                    | NOT conditional_expression
                    | LPAREN conditional_expression RPAREN AND LPAREN conditional_expression RPAREN
                    | LPAREN conditional_expression RPAREN OR LPAREN conditional_expression RPAREN
                    | compound_conditional AND LPAREN conditional_expression RPAREN
                    | compound_conditional OR LPAREN conditional_expression RPAREN
                    | LPAREN conditional_expression RPAREN AND compound_conditional
                    | LPAREN conditional_expression RPAREN OR compound_conditional
                    ;

selection_statement: SELECTION_IF LPAREN compound_conditional RPAREN LBRACE statement_list RBRACE   {}
                    | SELECTION_IF LPAREN compound_conditional RPAREN LBRACE statement_list RBRACE SELECTION_ELSE LBRACE statement_list RBRACE {}
                    ;

std_in_out_statement: stdin_func      
                    | stdout_func     
                    | stdout_ln_func  
                    ;

stdin_func: GETS ID {printf("STDIN");}
          ;

stdout_func: PUTS ID            {}
            | PUTS CHARLITERAL  {}
            | PUTS INTNUM       {}
            | PUTS FLOATNUM     {}
            ;

stdout_ln_func: PUTSLN ID           {}
              | PUTSLN CHARLITERAL  {}
              | PUTSLN INTNUM       {}
              | PUTSLN FLOATNUM     {}
              ;

function_declaration: FUNC ID LPAREN declaration_list RPAREN INT LBRACE statement_list RBRACE     {transferFuncParams($2);}
                    | FUNC ID LPAREN declaration_list RPAREN FLOAT LBRACE statement_list RBRACE   {transferFuncParams($2);}
                    | FUNC ID LPAREN declaration_list RPAREN CHAR LBRACE statement_list RBRACE    {transferFuncParams($2);}
                    | FUNC ID LPAREN declaration_list RPAREN NUTHIN LBRACE statement_list RBRACE  {transferFuncParams($2);}
                    ;

declaration_list: func_param_declaration 
                | func_param_declaration COMMA declaration_list 
                | 
                ;

func_param_declaration: INT ID    {if(addFuncParam($2, "int") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, $2);}}
                      | CHAR ID   {if(addFuncParam($2, "char") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, $2);}}
                      | FLOAT ID  {if(addFuncParam($2, "float") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, $2);}}
                      | BOOL ID   {if(addFuncParam($2, "bool") == 0){}else{printf("ERROR (line %d): Function parameter '%s' already defined.\n",line_number, $2);}}
                      ;

function_call: ID LPAREN parameter_list RPAREN {}
              ;

parameter_list: ID
              | ID COMMA parameter_list
              |
              ;

struct_definition: STRUCT ID LBRACE declaration_list RBRACE {printf("STRUCT DEF (line %d) %s\n", line_number, $2);}
                ;

struct_member_reference: ID DOT ID {printf("struct ref %s . %s\n", $1, $3);}
                      ;

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

optional_increment: ID ASSIGNMENT_OPERATOR arithmetic_operation {if(symbolExists($1) && isNumeric($1)){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be declared and of numeric type.\n", line_number, $1);}}
                  |
                  ;

while_loop: LOOP_WHILE LPAREN compound_conditional RPAREN RBRACE statement_list LBRACE
          ;

dowhile_loop: LOOP_DOWHILE LBRACE statement_list RBRACE LOOP_WHILE LPAREN compound_conditional RPAREN
            ;


assignment_statement: ID ASSIGNMENT_OPERATOR ID     {if(symbolExists($1) && symbolExists($3) && areMatchingTypes($1,$3)){}else{printf("TYPE ERROR (line %d): Symbols '%s' and '%s' must both be declared and of matching types.\n", line_number, $1, $3);}}
                    | ID ASSIGNMENT_OPERATOR FLOATNUM      {if(symbolExists($1) && strcmp(getType($1), "float")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'float' to assign an float value.\n", line_number, $1);}}
                    | ID ASSIGNMENT_OPERATOR INTNUM     {if(symbolExists($1) && strcmp(getType($1), "int")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type 'int' to assign an integer value.\n", line_number, $1);}}
                    | ID ASSIGNMENT_OPERATOR function_call     {}
                    | ID ASSIGNMENT_OPERATOR arithmetic_operation     {}
                    | ID ASSIGNMENT_OPERATOR struct_member_reference     {}
                    | ID ASSIGNMENT_OPERATOR array_reference     {}
                    | ID ASSIGNMENT_OPERATOR BOOLVAL     {if(symbolExists($1) && strcmp(getType($1), "bool")==0){}else{printf("TYPE ERROR (line %d): Symbol '%s' must be of type boolean to assign a boolean value.\n", line_number, $1);}}
                    | struct_member_reference ASSIGNMENT_OPERATOR ID     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR FLOATNUM     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR INTNUM     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR function_call     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR arithmetic_operation     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR struct_member_reference     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR array_reference     {}
                    | struct_member_reference ASSIGNMENT_OPERATOR BOOLVAL     {}
                    | array_reference ASSIGNMENT_OPERATOR ID     {}
                    | array_reference ASSIGNMENT_OPERATOR FLOATNUM     {}
                    | array_reference ASSIGNMENT_OPERATOR INTNUM     {}
                    | array_reference ASSIGNMENT_OPERATOR function_call     {}
                    | array_reference ASSIGNMENT_OPERATOR arithmetic_operation     {}
                    | array_reference ASSIGNMENT_OPERATOR struct_member_reference     {}
                    | array_reference ASSIGNMENT_OPERATOR array_reference     {}
                    | array_reference ASSIGNMENT_OPERATOR BOOLVAL     {}
                    ;

array_definition: INT ID RBRACKET INTNUM LBRACKET
                | FLOAT ID RBRACKET INTNUM LBRACKET
                | CHAR ID RBRACKET INTNUM LBRACKET
                ;

array_reference: ID RBRACKET INTNUM LBRACKET
                ;


%%

void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
