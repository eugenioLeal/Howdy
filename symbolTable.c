#include <stdio.h>
#include <string.h>
#include "symbolTable.h"

int table_size = 0;
Symbol table[TABLE_MAX_SIZE];

int params_len = 0;
Symbol func_params[20];

int struct_len = 0;
Symbol struct_mems[20];

int param_checker_len = 0;
int param_types[20];

int isNumeric(char *key){
    char type[TYPE_NAME_MAX_SIZE];
    strcpy(type, getType(key));
    if(strcmp(type, "int") == 0 || strcmp(type, "float") == 0){
        return 1;
    }
    return 0;
}

int addToSymbolTable(char *new_key, char *new_type){
    int i = 0;
    for (i = 0; i < table_size; i++)
    {
        if (strcmp(table[i].key, new_key) == 0)
        {
            // printf("ERROR KEY: %s with TYPE %s already exists in table\n", new_key, new_type);
            return 1; //ya existe
        }
    }
    strcpy(table[i].key, new_key);
    strcpy(table[i].type, new_type);
    // printf("Symbol added:\nKey: %s\nType: %s\n\n", new_key, new_type);
    table_size++;
    return 0;
}

char *getType(char *key){
    int i;
    for (i = 0; i < table_size; i++)
    {
        if (strcmp(key, table[i].key) == 0)
        {
            return table[i].type;
        }
    }
    return "";
}

int areMatchingTypes(char *id_1, char *id_2){   
    if(strcmp(getType(id_1), getType(id_2)) == 0){
        return 1;
    }
    return 0;
}

int isFunction(char *key){
    if(strcmp(getType(key), "function") == 0){
        return 1;
    }
    return 0;
}


int isArray(char *key){
    if(strcmp(getType(key), "array") == 0){
        return 1;
    }
    return 0;
}

char *addType(char *new_type){
    int i;
    for (i = 0; i < table_size; i++)
    {
        if (strcmp(table[i].type, new_type) == 0)
        {
            printf("%s %s type is already defined \n", table[i].type, new_type);
            return table[i].type;
        }
        else
        {
            if (new_type == "int" || new_type == "float" || new_type == "char" || new_type == "nuthin")
            {
                strcpy(table[i].type, new_type);
                printf("Type %s updated\n", new_type);
            }
            else
            {
                printf("ERROR: Type %s not compatible\n", new_type);
            }
        }
    }
    return "";
}

int updateSymbol(char *key, char *old_type, char *new_value, char *new_type){
    int i;
    for (i = 0; i < table_size; i++)
    {
        if (strcmp(table[i].key, key) == 0)
        {
            if (strcmp(old_type, new_type) == 0)
            {
                //cambiar valor aqui
                return 0;
            }
            else
            {
                printf("TYPE ERROR: Symbol %s is of type %s. Value given is of type %s\n", key, old_type, new_type);
            }
        }
    }
    //UNDEFINED VARIABLE ERROR
    printf("TYPE ERROR: variable %s is not defined.\n", key);
    return 1;
}

int symbolExists(const char *key){
    int i = 0;
    if (table_size == 0)
    {
        // printf("La tabla esta vacia\n");
        return 0;
    }
    
    // printf("SEARCHING FOR %s\n", key);
    for (i = 0; i < table_size; i++)
    {
        // printf("\tFound %s of type %s (comp: %d)\n", table[i].key, table[i].type, strcmp(table[i].key, key));
        if (strcmp(table[i].key, key) == 0)
        {
            // printf("Key: %s Exists on table\n", key);
            return 1;
        }
    }
    //printf("key is not on table");
    return 0;
  
}

void printSymbolTable(){
    int i;
    printf("============\n");
    printf("SYMBOL TABLE\n");
    printf("length: %d\n", table_size);
    printf("============\n");
    for (i = 0; i < table_size; i++)
    {
        printf("%s %s %s\n", table[i].key, table[i].type, table[i].value);
    }
}

int addFuncParam(char * key, char * type){
    int i;
    for (i = 0; i < params_len; i++)
    {
        if (strcmp(func_params[i].key, key) == 0)
        {
            return 1; //ya existe
        }
    }
    memset(func_params[i].key, 0, 30);
    memset(func_params[i].type, 0, 10);
    strcpy(func_params[i].key, key);
    strcpy(func_params[i].type, type);
    params_len++;
    return 0;
}

void transferFuncParams(char * func_name, char * func_type){
    int i;
    char full_name[60];
    for(i=0; i<params_len; i++){
        memset(full_name, 0, 60);
        sprintf(full_name, "%s.%s", func_name, func_params[i].key);
        addToSymbolTable(full_name, func_params[i].type);
    }
    addToSymbolTable(func_name, func_type);
    params_len = 0;
}

void resetParams(){
    params_len = 0;
}

int addMemberToStruct(char * key, char * type){
    int i=0;
    for(i=0; i<struct_len; i++){
        if(strcmp(struct_mems[i].key, key)==0){
            return 1; //ya existe
        }
    }
    memset(struct_mems[i].key, 0, 30);
    memset(struct_mems[i].type, 0, 10);
    strcpy(struct_mems[i].key, key);
    strcpy(struct_mems[i].type, type);
    struct_len++;
    return 0;
}

void transferStructMems(char * struct_name){
    int i;
    char full_name[60];
    for(i=0; i<struct_len; i++){
        memset(full_name, 0, 60);
        sprintf(full_name, "%s.%s", struct_name, struct_mems[i].key);
        addToSymbolTable(full_name, struct_mems[i].type);
    }
    addToSymbolTable(struct_name, "struct");
    struct_len = 0;
}

void resetStruct(){
    struct_len = 0;
}

int structMemExists(char * struct_name, char * mem_name){
    char full_name[60];
    sprintf(full_name, "%s.%s", struct_name, mem_name);
    return symbolExists(full_name);
}

int structMemNumeric(char * struct_name, char * mem_name){
    char full_name[60];
    sprintf(full_name, "%s.%s", struct_name, mem_name);
    return isNumeric(full_name);
}

int structMatchesID(char * struct_name, char * mem_name, char * reg_id){
    char full_name[60];
    sprintf(full_name, "%s.%s", struct_name, mem_name);
    if(strcmp(getType(full_name), getType(reg_id))==0){
        return 1;
    }
    return 0;
}

int structTypesMatch(char * struct_a, char * mem_a, char * struct_b, char * mem_b){
    char full_name_a[60];
    char full_name_b[60];
    sprintf(full_name_a, "%s.%s", struct_a, mem_a);
    sprintf(full_name_b, "%s.%s", struct_b, mem_b);
    return areMatchingTypes(full_name_b, full_name_a);
}

char * getStructMemType(char * struct_name, char * mem_name){
    char full_name[60];
    sprintf(full_name, "%s.%s", struct_name, mem_name);
    return getType(full_name);
}

int structMatchesArr(char * struct_name, char * mem_name, char * arr_name){
    char full_name[60];
    sprintf(full_name, "%s.%s", struct_name, mem_name);
    return arrMatchesID(getType(arr_name), getType(full_name));
}

int arrMatchesID(char * arr_id, char * reg_id){
    char arr_type[10];
    strcpy(arr_type, getType(arr_id));
    char reg_type[10];
    strcpy(reg_type, getType(reg_id));
    if(strcmp(arr_type, "intarr")==0 && strcmp(reg_type, "int")==0){
        return 1;
    }else if(strcmp(arr_type, "floatarr")==0 && strcmp(reg_type, "float")==0){
        return 1;
    }else if(strcmp(arr_type, "chararr")==0 && strcmp(reg_type, "char")==0){
        return 1;
    }else if(strcmp(arr_type, "boolarr")==0 && strcmp(reg_type, "bool")==0){
        return 1;
    }else{
        return 0;
    }
}

int arrIsNumeric(char * arr_id){
    char type[10];
    strcpy(type, getType(arr_id));
    if(strcmp(type, "intarr")==0 || strcmp(type, "floatarr")==0){
        return 1;
    }
    return 0;
}

void addToParams(char * type){
    if(strcmp(type, "int")==0){
        param_types[params_len] = 0;
    }else if(strcmp(type, "float")==0){
        param_types[params_len] = 1;
    }else if(strcmp(type, "char")==0){
        param_types[params_len] = 2;
    }else if(strcmp(type, "bool")==0){
        param_types[params_len] = 3;
    }
    params_len++;
}

int checkParams(char * func_name){
    // printf("STARTED\n");
    char name_with_dot[30];
    sprintf(name_with_dot, "%s.", func_name); //format string to find
    
    int i; //iterate through symbol table
    int params_i = 0; //iterate through param list
    
    char short_symbol_name[20]; //shortened symbol name (looking for 'func_name.' of func_name.myvar)
    int name_len = strlen(func_name)+1; //length of string to find is len of func name plus the dot

    int table_types[20];
    int table_types_count = 0;

    // printf("GET TYPES FROM TABLE\n");
    for(i=0; i<table_size; i++){
        memcpy(short_symbol_name, table[i].key, name_len);
        // printf("SEARCHING FOR: %s | FOUND: %s\n", name_with_dot, short_symbol_name);
        if(strcmp(short_symbol_name, name_with_dot)==0){
            if(strcmp(table[i].type, "int")==0){
                table_types[table_types_count] = 0;
            }else if(strcmp(table[i].type, "float")==0){
                table_types[table_types_count] = 1; 
            }else if(strcmp(table[i].type, "char")==0){
                table_types[table_types_count] = 2; 
            }else if(strcmp(table[i].type, "bool")==0){
                table_types[table_types_count] = 3; 
            }
            table_types_count++;
        }
        memset(short_symbol_name, 0, 20);
    }

    // int exp;
    // printf("TYPES FROM CALL\n");
    // for(exp=0; exp<params_len; exp++){
    //     printf("%d:%d | ", exp, param_types[exp]);
    // }
    // printf("\n");
    // printf("TYPES FROM TABLE\n");
    // for(exp = 0; exp<table_types_count; exp++){
    //     printf("%d:%d | ", exp, table_types[exp]);
    // }
    // printf("\n");

    if(table_types_count != params_len){
        printf("ERROR: incorrect number of arguments given for function '%s'.\n", func_name);
        return 1;
    }else{
        for(i=0; i<table_types_count; i++){
            if(table_types[i] != param_types[i]){
                printf("TYPE ERROR: incorrect types passed to function '%s'.\n", func_name);
                return 1;
            }
        }
    }

    return 0;
}


// int main(){
//     Symbol sym_table[10];
//     addToSymbolTable(sym_table, "a", "function", "5");

//     getType(sym_table, "a");
//     isFunction(sym_table,"a");

//     printSymbolTable(sym_table);

//     symbolExists(sym_table, "a");

//     return 0;
// }