#include <stdio.h>

int main() {
    FILE *f = fopen("test.bin", "rb");
    if (!f) return 1;

    
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    printf("Размер файла: %ld байт\n", size);

    fclose(f);
    return 0;
}