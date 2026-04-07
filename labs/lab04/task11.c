#include <stdio.h>

int main() {
    FILE *f = fopen("test.txt", "r");
    if (!f) return 1;

    char c;
    while (1) {
        c = fgetc(f);
        if (feof(f)) break;    
        if (ferror(f)) {   
            printf("Ошибка\n");
            break;
        }
        printf("%c", c);
    }
    fclose(f);
    return 0;
}