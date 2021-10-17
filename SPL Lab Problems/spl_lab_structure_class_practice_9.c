#include<stdio.h>

struct student
{
    char name[20];
    char id[10];
    float cgpa;
};

void high_cg(struct student data[2])
{
    int max = data[0].cgpa;
    printf("\n");
    if(max<data[1].cgpa)
    {
        puts(data[1].name);
        puts(data[1].id);
        printf("%.2f",data[1].cgpa);
    }
    else
    {
        puts(data[0].name);
        puts(data[0].id);
        printf("%.2f",data[0].cgpa);
    }
}

int main()
{
    struct student data[2];
    int i=0;
    while(i<2)
    {
        fflush(stdin);
        gets(data[i].name);
        gets(data[i].id);
        scanf("%f",&data[i].cgpa);
        i++;
    }
    high_cg(data);
}