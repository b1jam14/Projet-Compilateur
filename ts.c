#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOLS 128

typedef struct {
    char name[20];
    int value;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void addSymbol(const char* name, int value) {
    if (symbolCount < MAX_SYMBOLS) {
        Symbol symbol;
        strncpy(symbol.name, name, sizeof(symbol.name));
        symbol.value = value;
        symbolTable[symbolCount++] = symbol;
    } else {
        printf("Symbol table is full. Cannot add symbol.\n");
    }
}

int findSymbol(const char* name) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return symbolTable[i].value;
        }
    }
    return -1; // Symbol not found
}

int main() {
    // Example usage
    addSymbol("x", 10);
    addSymbol("y", 20);
    
    int xValue = findSymbol("x");
    if (xValue != -1) {
        printf("Value of x: %d\n", xValue);
    } else {
        printf("Symbol x not found.\n");
    }
    
    int zValue = findSymbol("z");
    if (zValue != -1) {
        printf("Value of z: %d\n", zValue);
    } else {
        printf("Symbol z not found.\n");
    }
    
    return 0;
}