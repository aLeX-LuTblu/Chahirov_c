#include<stdio.h>

struct Student {
    char * name;
    int age;
    float score;
};

struct Student students[5] =
{
    {"Alexandr", 16, 4.8},
    {"Ivan", 17, 4.3},
    {"Ilya", 15, 5},
    {"Tima", 16, 4.6},
    {"Roland", 16, 3}
};

int main(){   

    for (int i=0; i<5; i++){
        printf("Name student - %s, age - %d, now score - %.2f\n", students[i].name, students[i].age, students[i].score);
    }
    
    return 0;
}