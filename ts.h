typedef struct {
    char name[20];
    int depth;
} Symbol;

void addSymbol(const char* name);

void addFonction(const char* name);
void addReturnAddress(const char* name);
void addReturnValue(const char* name);

void addTmpSymbol();

void increaseDepth();
void decreaseDepth();
int getDepth();

int getSymbol(const char* name) ;
int getTopStack();
int getFonctionAddress(const char* name);

void deleteSymbol(const char* name);
void deleteSymbolScope();
void deleteSymbolTmpScope();
void deleteTopStack();

void flushTable();

void printTable();

void writeASM(char instruction[3], int var1, int var2, int resultAddress);
void endJump(char* type);
int getJumpEmpty();
void writeASMfile();