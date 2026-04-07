#include<stdio.h>
int main(){
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) return 1;
    int n;
    scanf("%d", &n);
    int vvod;
    for (int i = 0; i<n; i++){
        scanf("%d", &vvod);
        putc(vvod, fp);
    }
    
    fclose(fp);

   
    fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;
    
    for (int i = 0; i<n; i++){
        printf("%d\n", getc(fp));
    }

    fclose(fp);
    return 0;
}