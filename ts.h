

typedef struct {
    char name[20];
    int value;
} Symbol;

void addSymbol(const char* name, int value);
int findSymbol(const char* name);