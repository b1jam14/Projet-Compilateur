#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOLS 100

typedef struct {
    char name[20];
    int depth;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;
int depth = 0;

//TODO: ajouter le scope au quel appartient la variable
void addSymbol(const char* name) {
    if(symbolCount < MAX_SYMBOLS) {
        strcpy(symbolTable[symbolCount].name, name);
        symbolTable[symbolCount].depth = depth;
        symbolCount++;
        printf( "Symbol %s added to the table.\n", name);
        //symbolTable[symbolCount].type = type;
    }
    else{
        printf("ERREUR\n");
    }   
}

void increaseDepth() {
    depth++;
    printf("Depth increased to %d\n", depth);
}

void decreaseDepth() {
    depth--;
    printf("Depth decreased to %d\n", depth);
}

int getDepth() {
    return depth;
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

void deleteSymbol(const char* name) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            for (int j = i; j < symbolCount - 1; j++) {
                strcpy(symbolTable[j].name, symbolTable[j + 1].name);
                symbolTable[j].depth = symbolTable[j + 1].depth;
            }
            symbolCount--;
            printf("Symbol %s deleted from the table.\n", name);
        }
    }
}

void deleteSymbolScope(){
    for (int i = 0; i < symbolCount; i++) {
        if (symbolTable[i].depth == depth) {
            printf("Symbol %s deleted from the table.\n", symbolTable[i].name);
            for (int j = i; j < symbolCount - 1; j++) {
                strcpy(symbolTable[j].name, symbolTable[j + 1].name); 
                symbolTable[j].depth = symbolTable[j + 1].depth;
            }
            symbolCount--;
        }
    }
}

void flushTable() {
    symbolCount = 0;
    printf("Symbol table flushed.\n");
}

void printTable() {
    printf("---------------------------\n");
    printf("| %-10s |", "   Name");
    printf(" %-10s | \n", "   Depth");
    printf("---------------------------\n");
    for (int i = 0; i < symbolCount; i++) {
        printf("| %-10s |", symbolTable[i].name);
        printf(" %-10i |\n", symbolTable[i].depth);
    }
    printf("---------------------------\n");
}

void writeASM(FILE* file,char* instruction, int var1Address, int var2Address, int resultAddress) {
    char buff[128];
    sprintf(buff, "%s %d %d %d\n", instruction, var1Address, var2Address, resultAddress);
    fprintf(file, "%s", buff);  
}