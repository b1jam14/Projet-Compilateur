

typedef struct {
    char name[20];
    int value;
} Symbol;

void addSymbol(const char* name, int type);

int getSymbol(const char* name) ;