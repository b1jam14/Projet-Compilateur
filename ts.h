

typedef struct {
    char name[20];
    //int value;
} Symbol;

void addSymbol(const char* name);

int getSymbol(const char* name) ;

void deleteSymbol(const char* name);

void flushTable();

void printTable();

void writeASM(FILE* file,char* instruction, int var1Address, int var2Address, int resultAddress);