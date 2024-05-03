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
int tmpCount = 0;

char* asmStack[MAX_SYMBOLS][4];
int asmCount = 0;

void addSymbol(const char* name) {
    if(symbolCount < MAX_SYMBOLS) {
        strcpy(symbolTable[symbolCount].name, name);
        symbolTable[symbolCount].depth = depth;
        symbolCount++;
        printf( "Symbol %s added to the table.\n", name);
    }
    else{
        printf("ERREUR\n");
    }   
}

void addTmpSymbol(){
    char tmp[20];
    sprintf(tmp, "tmp%d", tmpCount);
    tmpCount++;
    if(symbolCount < MAX_SYMBOLS) {
        strcpy(symbolTable[symbolCount].name, tmp);
        symbolTable[symbolCount].depth = depth;
        symbolCount++;
        printf( "Tmp symbol %s added to the table.\n", tmp);
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

int getTopStack(){
    return symbolCount-1;
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
    int nbSymbols = symbolCount;
    for (int i = 0; i < nbSymbols; i++) {
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

void deleteTopStack(){
    symbolCount--;
}

void flushTable() {
    symbolCount = 0;
    printf("Symbol table flushed.\n");
}

void printTable() {
    printf("---------------------------\n");int tmpVar;
    printf("| %-10s |", "   Name");
    printf(" %-10s | \n", "   Depth");
    printf("---------------------------\n");
    for (int i = 0; i < symbolCount; i++) {
        printf("| %-10s |", symbolTable[i].name);
        printf(" %-10i |\n", symbolTable[i].depth);
    }
    printf("---------------------------\n");
}

void writeASM(char instruction[3], int var1, int var2, int resultAddress) {
    /*
    char buff[128];
    sprintf(buff, "%s %d %d %d\n", instruction, var1, var2, resultAddress);
    fprintf(file, "%s", buff);*/
    asmStack[asmCount][0] = instruction;
    asmStack[asmCount][1] = (char*)malloc(1*sizeof(char));
    asmStack[asmCount][2] = (char*)malloc(1*sizeof(char));
    asmStack[asmCount][3] = (char*)malloc(1*sizeof(char));

    if(var1==-1){asmStack[asmCount][1]="?";}else{sprintf(asmStack[asmCount][1], "%d", var1);}
    if(var2==-1){asmStack[asmCount][2]="?";}else{sprintf(asmStack[asmCount][2], "%d", var2);}
    sprintf(asmStack[asmCount][3], "%d", resultAddress);
    
    asmCount++;
}

void endJump(char* type){
    asmStack[asmCount][0] = "NOP";
    asmStack[asmCount][1] = "0";
    asmStack[asmCount][2] = "0";
    asmStack[asmCount][3] = "0";

    for(int i = asmCount - 1; i >= 0; i--){
        if ((strcmp(asmStack[i][0], type) == 0) && ((strcmp(asmStack[i][1], "?") == 0)||(strcmp(asmStack[i][2], "?") == 0))){
            char* tmp = (char*)malloc(1*sizeof(char));
            sprintf(tmp, "%d", asmCount);
            asmStack[i][2] = tmp;
            break;
        }
    }
    asmCount++;
}

int getJumpEmpty(){
    for(int i = asmCount - 1; i >= 0; i--){
        if (strcmp(asmStack[i][2], "?") == 0){
            return i;
            break;
        }
    }
}

void writeASMfile(){
    printf("Writing ASM file...\n");
    FILE* file = fopen("asm.out", "w");
    for (int i = 0; i < asmCount; i++) {
        fprintf(file, "%s %s %s %s\n", asmStack[i][0], asmStack[i][1], asmStack[i][2], asmStack[i][3]);
    }
    fclose(file);
}