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
program: HOWDY_PARTNER statement_list SO_LONG_PARTNER 

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

declaration_statement: INT ID    
                    | FLOAT ID   
                    | CHAR ID    
                    | BOOL ID    
                    ;

sum_operation: ID ADDITION ID               
              | ID ADDITION INTNUM          
              | ID ADDITION FLOATNUM        
              | INTNUM ADDITION ID          
              | INTNUM ADDITION INTNUM      
              | INTNUM ADDITION FLOATNUM    
              | FLOATNUM ADDITION ID          
              | FLOATNUM ADDITION INTNUM    
              | FLOATNUM ADDITION FLOATNUM  
              ;

sub_operation: ID SUBTRACTION ID                
              | ID SUBTRACTION INTNUM           
              | ID SUBTRACTION FLOATNUM         
              | INTNUM SUBTRACTION ID           
              | INTNUM SUBTRACTION INTNUM       
              | INTNUM SUBTRACTION FLOATNUM     
              | FLOATNUM SUBTRACTION ID         
              | FLOATNUM SUBTRACTION INTNUM     
              | FLOATNUM SUBTRACTION FLOATNUM   
              ;

mult_operation: ID MULTIPLICATION ID              
              | ID MULTIPLICATION INTNUM          
              | ID MULTIPLICATION FLOATNUM        
              | INTNUM MULTIPLICATION ID          
              | INTNUM MULTIPLICATION INTNUM      
              | INTNUM MULTIPLICATION FLOATNUM    
              | FLOATNUM MULTIPLICATION ID        
              | FLOATNUM MULTIPLICATION INTNUM    
              | FLOATNUM MULTIPLICATION FLOATNUM  
              ;

div_operation: ID DIVISION ID               
              | ID DIVISION INTNUM          
              | ID DIVISION FLOATNUM        
              | INTNUM DIVISION ID          
              | INTNUM DIVISION INTNUM      
              | INTNUM DIVISION FLOATNUM    
              | FLOATNUM DIVISION ID        
              | FLOATNUM DIVISION INTNUM    
              | FLOATNUM DIVISION FLOATNUM  
              ;

mod_operation: ID MOD ID                
              | ID MOD INTNUM           
              | ID MOD FLOATNUM         
              | INTNUM MOD ID           
              | INTNUM MOD INTNUM       
              | INTNUM MOD FLOATNUM     
              | FLOATNUM MOD ID         
              | FLOATNUM MOD INTNUM     
              | FLOATNUM MOD FLOATNUM   
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
                    | ID EQUALS BOOLVAL         
                    | INTNUM EQUALS ID          
                    | INTNUM EQUALS INTNUM
                    | INTNUM EQUALS FLOATNUM
                    | FLOATNUM EQUALS ID        
                    | FLOATNUM EQUALS INTNUM
                    | FLOATNUM EQUALS FLOATNUM 
                    | BOOLVAL EQUALS BOOLVAL
                    | BOOLVAL EQUALS ID         
                    ;

inequality_expression: ID NOT_EQUALS ID             
                    | ID NOT_EQUALS INTNUM          
                    | ID NOT_EQUALS FLOATNUM        
                    | ID NOT_EQUALS BOOLVAL         
                    | INTNUM NOT_EQUALS ID          
                    | INTNUM NOT_EQUALS INTNUM
                    | INTNUM NOT_EQUALS FLOATNUM
                    | FLOATNUM NOT_EQUALS ID        
                    | FLOATNUM NOT_EQUALS INTNUM
                    | FLOATNUM NOT_EQUALS FLOATNUM
                    | BOOLVAL NOT_EQUALS BOOLVAL
                    | BOOLVAL NOT_EQUALS ID         
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

conditional_expression: equality_expression     
                      | inequality_expression   
                      | lessthan_expression     
                      | greaterthan_expression  
                      | lessequal_expression    
                      | greaterequal_expression 
                      | ID        
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

selection_statement: SELECTION_IF LPAREN compound_conditional RPAREN LBRACE statement_list RBRACE   
                    | SELECTION_IF LPAREN compound_conditional RPAREN LBRACE statement_list RBRACE SELECTION_ELSE LBRACE statement_list RBRACE 
                    ;

std_in_out_statement: stdin_func      
                    | stdout_func     
                    | stdout_ln_func  
                    ;

stdin_func: GETS ID 
          ;

stdout_func: PUTS ID            
            | PUTS CHARLITERAL  
            | PUTS INTNUM       
            | PUTS FLOATNUM     
            ;

stdout_ln_func: PUTSLN ID           
              | PUTSLN CHARLITERAL  
              | PUTSLN INTNUM       
              | PUTSLN FLOATNUM     
              ;

function_declaration: FUNC ID LPAREN func_declaration_list RPAREN INT LBRACE statement_list RBRACE      
                    | FUNC ID LPAREN func_declaration_list RPAREN FLOAT LBRACE statement_list RBRACE    
                    | FUNC ID LPAREN func_declaration_list RPAREN CHAR LBRACE statement_list RBRACE     
                    | FUNC ID LPAREN func_declaration_list RPAREN NUTHIN LBRACE statement_list RBRACE   
                    | FUNC ID LPAREN func_declaration_list RPAREN BOOL LBRACE statement_list RBRACE     
                    ;

func_declaration_list: func_param_declaration 
                | func_param_declaration COMMA func_declaration_list 
                | 
                ;

func_param_declaration: INT ID    
                      | CHAR ID   
                      | FLOAT ID  
                      | BOOL ID   
                      ;

function_call: ID LPAREN parameter_list RPAREN 
              ;

parameter_list: func_call_param
              | func_call_param COMMA parameter_list
              | 
              ;

func_call_param: ID
              | INTNUM
              | CHARLITERAL
              | FLOATNUM
              | BOOLVAL
              ;

struct_definition: STRUCT ID LBRACE struct_declaration_list RBRACE 
                ;

struct_declaration_list: struct_declaration SEMI
                      | struct_declaration SEMI struct_declaration_list
                      |
                      ;

struct_declaration: INT ID     
                  | CHAR ID    
                  | FLOAT ID   
                  | BOOL ID    
                  ;

struct_member_reference: ID DOT ID 
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
                    | ID ASSIGNMENT_OPERATOR ID DOT ID                
                    | ID ASSIGNMENT_OPERATOR ID LBRACKET array_index RBRACKET          
                    | ID ASSIGNMENT_OPERATOR BOOLVAL                  
                    | ID ASSIGNMENT_OPERATOR CHARLITERAL              
                    | ID DOT ID ASSIGNMENT_OPERATOR ID                
                    | ID DOT ID ASSIGNMENT_OPERATOR FLOATNUM          
                    | ID DOT ID ASSIGNMENT_OPERATOR INTNUM            
                    | ID DOT ID ASSIGNMENT_OPERATOR function_call     
                    | ID DOT ID ASSIGNMENT_OPERATOR arithmetic_operation          
                    | ID DOT ID ASSIGNMENT_OPERATOR ID DOT ID         
                    | ID DOT ID ASSIGNMENT_OPERATOR ID LBRACKET array_index RBRACKET   
                    | ID DOT ID ASSIGNMENT_OPERATOR BOOLVAL           
                    | ID DOT ID ASSIGNMENT_OPERATOR CHARLITERAL       
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR ID          
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR FLOATNUM    
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR INTNUM      
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR function_call               
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR arithmetic_operation        
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR ID DOT ID   
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR ID LBRACKET array_index RBRACKET 
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR BOOLVAL     
                    | ID LBRACKET array_index RBRACKET ASSIGNMENT_OPERATOR CHARLITERAL                 
                    ;

array_definition: INT ID LBRACKET INTNUM RBRACKET     
                | FLOAT ID LBRACKET INTNUM RBRACKET   
                | CHAR ID LBRACKET INTNUM RBRACKET    
                | BOOL ID LBRACKET INTNUM RBRACKET    
                ;

array_index: INTNUM
            | ID    

%%

void yyerror(char *s) {
  printf("\nline %d: %s\n",line_number,s);
}

int main(void) {
  yyparse();
}
