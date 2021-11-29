#include <stdio.h>
#include <string.h>
#include "symbolTable.h"

// typedef struct symbol
// {
//     char key[20];
//     char type[10];
//     char value[30];
// } Symbol;

int table_size = 0;
Symbol table[TABLE_MAX_SIZE];

int isNumeric(char *key)
{
    char type[TYPE_NAME_MAX_SIZE];
    strcpy(type, getType(key));
    if(strcmp(type, "int") == 0 || strcmp(type, "float") == 0){
        return 1;
    }
    return 0;
}

int addToSymbolTable(char *new_key, char *new_type)
{
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

char *getType(char *key)
{
    int i;
    for (i = 0; i < table_size; i++)
    {
        if (strcmp(key, table[i].key) == 0)
        {
            // if (strcmp(table[i].type, "int") == 0)
            // {
            //     printf("key %s is INT TYPE\n", key);
            // }
            // else if (strcmp(table[i].type, "float") == 0)
            // {
            //     printf("key %s is FLOAT TYPE\n", key);
            // }
            // else if (strcmp(table[i].type, "char") == 0)
            // {
            //     printf("key %s is CHAR TYPE\n", key);
            // }
            // else if (strcmp(table[i].type, "nuthin") == 0)
            // {
            //     printf("key %s is NUTHIN TYPE\n", key);
            // }
            // else
            // {
            //     printf("ERROR symbol %s is undefined\n", key);
            // }
            // if (strcmp(table[i].type, "function") == 0)
            // {
            //     printf("key %s is FUNCTION TYPE\n", key);
            // }
            return table[i].type;
        }
    }
    return "";
}

int areMatchingTypes(char *id_1, char *id_2)
{   
    if(strcmp(getType(id_1), getType(id_2)) == 0){
        return 1;
    }
    return 0;
    /*
    int i;
    char type_1[TYPE_NAME_MAX_SIZE];
    char type_2[TYPE_NAME_MAX_SIZE];
    for (i = 0; i < table_size; i++)
    {
        if (strcmp(id_1, id_2) == 0)
        {
            if (strcmp(table[i].type, "int") == 0)
            {
            }
        }
    }
    */
}

int isFunction(char *key)
{
    if(strcmp(getType(key), "function") == 0){
        return 1;
    }
    return 0;
    // int i;
    // for (i = 0; i < table_size; i++)
    // {
    //     if (strcmp(key, table[i].key) == 0)
    //     {
    //         if (strcmp(table[i].type, "function") == 0)
    //         {
    //             printf("key %s is FUNCTION\n", key);
    //             return 1;
    //         }else{
    //             printf("ERROR: not a function\n ");
    //             return 0;
    //         }
    //     }
    // }
}


int isArray(char *key)
{
    if(strcmp(getType(key), "array") == 0){
        return 1;
    }
    return 0;
    // int i;
    // for (i = 0; i < table_size; i++)
    // {
    //     if (strcmp(key, table[i].key) == 0)
    //     {
    //         if (strcmp(table[i].type, "array") == 0)
    //         {
    //             printf("key %s is ARRAY\n", key);
    //             return 1;
    //         }else{
    //             printf("ERROR: not an ARRAY\n ");
    //             return 0;
    //         }
    //     }
    // }
}

char *addType(char *new_type)
{
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

int updateSymbol(char *key, char *old_type, char *new_value, char *new_type)
{
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

int symbolExists(const char *key)
{
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

void printSymbolTable()
{
    int i;
    for (i = 0; i < table_size; i++)
    {
        printf("%s %s %s\n", table[i].key, table[i].type, table[i].value);
    }
}

// int main()
// {
//     Symbol sym_table[10];
//     addToSymbolTable(sym_table, "a", "function", "5");

//     getType(sym_table, "a");
//     isFunction(sym_table,"a");

//     printSymbolTable(sym_table);

//     symbolExists(sym_table, "a");

//     return 0;
// }