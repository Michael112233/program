#include<stdio.h>

extern int yyrestart(FILE* f);
extern int yyparse();
// extern int lexError = 0;
// extern int synError = 0;

int main(int argc, char** argv) {
    if(argc <= 1)
        return 1;
    FILE* f = fopen(argv[1], "r");
    if (!f) {
        perror(argv[1]);
        return 1;
    }
    yyrestart(f);
    yyparse();
}