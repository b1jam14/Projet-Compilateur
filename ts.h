

typedef struct {
    char name[20];
    //int value;
} Symbol;

void addSymbol(const char* name);

int getSymbol(const char* name) ;

void flushTable();

void printTable();