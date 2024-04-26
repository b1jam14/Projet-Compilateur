

typedef struct {
    char name[20];
    //int value;
} Symbol;

void addSymbol(const char* name);

void increaseDepth();

void decreaseDepth();

int getDepth();

int getSymbol(const char* name) ;

void deleteSymbol(const char* name);

void deleteSymbolScope();

void flushTable();

void printTable();

void writeASM(FILE* file,char* instruction, int var1Address, int var2Address, int resultAddress);