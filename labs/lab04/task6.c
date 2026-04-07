#include <stdio.h>

int main() {
    int mas[] = {10, 20, 30, 40, 50};
    int res[5];

    FILE *f = fopen("test.bin", "wb");
    fwrite(mas, sizeof(int), 5, f);
    fclose(f);

    f = fopen("test.bin", "rb");
    fread(res, sizeof(int), 5, f);
    for(int i = 0; i < 5; i++) printf("%d ", res[i]);
    fclose(f);
    return 0;
}