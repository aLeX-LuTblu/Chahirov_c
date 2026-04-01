#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person
{
    char * name;
    struct Date birthday;    
};

struct Date dates[3] =
{
    {18, 12, 2009},
    {13, 3, 1992},
    {2, 11, 1980}
};


int main(){
    struct Person persons[3] =
{
    {"Alexandr", dates[0]},
    {"Vadim", dates[1]},
    {"Oleg", dates[2]},
};
    for(int i=0; i<3; i++){
        if (dates[i].year >=2000){
            printf("Name: %s, Birth Year: %d.%d.%d\n", persons[i].name, persons[i].birthday.day, persons[i].birthday.month, persons[i].birthday.year);
        }
    }
}

