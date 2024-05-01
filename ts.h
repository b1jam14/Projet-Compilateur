typedef struct {
    char name[20];
    int depth;
} Symbol;

void addSymbol(const char* name);

void addTmpSymbol();

void increaseDepth();

void decreaseDepth();

int getDepth();

int getSymbol(const char* name) ;
int getTopStack();

void deleteSymbol(const char* name);
void deleteSymbolScope();
void deleteTopStack();

void flushTable();

void printTable();

void setTmp(int tmp);
void setTmpL(int tmp);
void setTmpR(int tmp);

int getTmp();
int getTmpL();
int getTmpR();

void writeASM(char* instruction, int var1, int var2, int resultAddress);
void endJMF();
void writeASMfile();