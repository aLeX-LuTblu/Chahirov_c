#include<stdio.h>

int main(){
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;

    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i<n; i++){
        char str[50];
        fgets(str, sizeof(str), stdin);
        fputs(str, file);
    }
    fclose(file);

    printf("\n");

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;

    char str[50];
    while (fgets(str, sizeof(str), file)) {
        printf("%s", str); 
    }
    fclose(file);
    return 0;
}