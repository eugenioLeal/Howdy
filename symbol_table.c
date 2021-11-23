#include <stdio.h>
#include <string.h>

typedef struct symbol{
	char key[20];
	char type[10];
	char value[30];
} Symbol;

int table_size = 0;

int addToSymbolTable(Symbol * table, char * new_key, char * new_type, char * new_value){
	int i=0;
	for(i=0; i<table_size; i++){
		if(strcmp(table[i].key, new_key) == 0){
			return 1; //ya existe
		}
	}
	strcpy(table[i].key, new_key);
	strcpy(table[i].type, new_type);
	strcpy(table[i].value, new_value);
	table_size++;
	return 0;
}

char * getType(Symbol * table, char * key){
	int i;
	for(i=0; i<table_size; i++){
		if(strcmp(key, table[i].key)==0){
			return table[i].type;
		}
	}
	printf("ERROR: Symbol %s is undefined\n", key);
	return "";
}


int updateSymbol(Symbol * table, char * key, char* old_type, char * new_value, char * new_type){
	int i;
	for(i=0; i<table_size; i++){
		if(strcmp(table[i].key, key) == 0){
			if(strcmp(old_type, new_type) == 0){
				//cambiar valor aqui
				return 0;
			}else{
				printf("TYPE ERROR: Symbol %s is of type %s. Value given is of type %s\n", key, old_type, new_type);
			}
		}
	}
	//UNDEFINED VARIABLE ERROR
	printf("TYPE ERROR: variable %s is not defined.\n", key);
	return 1;
}

void printSymbolTable(Symbol * table){
	int i;
	for(i=0; i<table_size; i++){
		printf("%s %s %s\n", table[i].key, table[i].type, table[i].value);
	}
}

int main(){
	Symbol sym_table[10];
	addToSymbolTable(sym_table, "a", "int", "5");
	printSymbolTable(sym_table);
	if(addToSymbolTable(sym_table, "a", "int", "5") == 1){
		printf("Symbol already exists");
	}
	printf("\n");
	printSymbolTable(sym_table);
	return 0;
}