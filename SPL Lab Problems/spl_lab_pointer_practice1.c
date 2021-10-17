#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    char id[10];
};

int main()
{
    struct student *data;
    int n,i;
    printf("How many students? ");
    scanf("%d",&n);

    data = (struct student*) malloc(n*sizeof(struct student));

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter Name: ");
        gets((data+i)->name);
        printf("Enter ID: ");
        scanf("%s",(data+i)->id);
    } 
    for(i=0;i<n;i++)
    {
        puts((data+i)->name);
        printf("%s\n",(data+i)->id);
    }
}