#include<stdio.h>

int main(){
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL){
        printf("error, file didnt be open");
        return 1;
    }
    printf("файл успешно открылся для записи");

    return 0;
    fclose(fp);
}