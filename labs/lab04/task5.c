#include <stdio.h>

int main() {
    char str[100];
    printf("введите строку: ");
    fgets(str, sizeof(str), stdin);

    FILE *f = fopen("test.txt", "w");
    if (f == NULL) return 1;
    fputs(str, f);
    fclose(f);

    f = fopen("test.txt", "r");
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), f)) {
        printf("cодержимое файла: %s", buffer);
    }
    fclose(f);
    return 0;
}