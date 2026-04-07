#include <stdio.h>

int main() {
    FILE *f = fopen("test.bin", "wb");
    if (f == NULL) return 1;
    int val1 = 2, val2 = 4, val3 = 6;
    fwrite(&val1, sizeof(int), 1, f);
    fwrite(&val2, sizeof(int), 1, f);
    fwrite(&val3, sizeof(int), 1, f);

    fclose(f);
    
    f = fopen("test.bin", "rb");
    if (f == NULL) return 1;

    fseek(f, sizeof(int) * 2, SEEK_SET);
    int val;
    fread(&val, sizeof(int), 1, f);
    printf("Данные на позиции 2: %d\n", val);

    fclose(f);
    return 0;
}