#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"Ivan", 25};

    FILE *f = fopen("test.bin", "wb");
    fwrite(&p1, sizeof(struct Person), 1, f);
    fclose(f);

    f = fopen("test.bin", "rb");
    fread(&p1, sizeof(struct Person), 1, f);
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    fclose(f);
    return 0;
}