#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOLS 100

typedef struct {
    char name[20];
    //int type;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void addSymbol(const char* name) {
    if(symbolCount < MAX_SYMBOLS) {
        strcpy(symbolTable[symbolCount].name, name);
        symbolCount++;
        printf( "Symbol %s added to the table.\n", name);
        //symbolTable[symbolCount].type = type;
    }
    else{
        printf("ERREUR\n");
    }   
}

int getSymbol(const char* name) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return i;
            printf("Symbol %s found at index %d\n", name, i);
        }
    }
    printf("Symbol %s not found -> ", name);
    return -1;
}

void flushTable() {
    symbolCount = 0;
    printf("Symbol table flushed.\n");
}

void printTable() {
    printf("--------------\n");
    printf("| %-10s | \n", "   Name");
    printf("--------------\n");
    for (int i = 0; i < symbolCount; i++) {
        printf("| %-10s |\n", symbolTable[i].name);
    }
    printf("--------------\n");
}