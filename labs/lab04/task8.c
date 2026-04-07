#include <stdio.h>

struct Person { 
    char name[50]; 
    int age; 
};

int main() {
    struct Person group[2] = {{"Alice", 20}, {"Bob", 30}};
    struct Person input[2];

    FILE *f = fopen("test.bin", "wb");
    fwrite(group, sizeof(struct Person), 2, f);
    fclose(f);

    f = fopen("test.bin", "rb");
    fread(input, sizeof(struct Person), 2, f);
    for(int i = 0; i < 2; i++) printf("%s - %d\n", input[i].name, input[i].age);
    fclose(f);
    return 0;
}