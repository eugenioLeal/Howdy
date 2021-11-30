#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#define TABLE_MAX_SIZE 10
#define TYPE_NAME_MAX_SIZE 10

typedef struct symbol
{
    char key[30];
    char type[10];
    char value[30];
} Symbol;

int isNumeric(char *key);
int addToSymbolTable(char *new_key, char *new_type);
char *getType(char *key);
int areMatchingTypes(char *id_1, char *id_2);
int isFunction(char *key);
int isArray(char *key);
char *addType(char *new_type);
int updateSymbol(char *key, char *old_type, char *new_value, char *new_type);
int symbolExists(const char *key);
void printSymbolTable();
int addFuncParam(char * key, char * type);
void transferFuncParams(char * func_name, char * functype)
void resetParams();
int addMemberToStruct(char * key, char * type);
void transferStructMems(char * struct_name);
void resetStruct();

#endif