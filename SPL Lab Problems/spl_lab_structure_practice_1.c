#include<stdio.h>

struct student
{
    char name;
    char id[10];
    float cgpa;
};

int main()
{
    struct student data;

    gets(data.name);
    gets(data.id);
    scanf("%f",&data.cgpa);
    
    puts(data.name);
    puts(data.id);
    printf("%.2f",data.cgpa);
}