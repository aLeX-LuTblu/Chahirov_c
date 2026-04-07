#include <stdio.h>

int main(){
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;

    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        char vvod[50];
        scanf("%s", vvod);
        fprintf(file, "%s\n", vvod);
    }
    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;

    for (int i=0; i<n; i++){
        char vvod[50];
        fscanf(file, "%s\n", vvod);
        printf("%s\n", vvod);
    }
    fclose(file);
    return 0;

}