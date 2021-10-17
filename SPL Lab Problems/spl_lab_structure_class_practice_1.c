#include<stdio.h>

struct student
{
    char name[20];
    char id[10];
    float marks[3];
};

int main()
{
    struct student data[5];
    int i;
    for(i=0;i<5;i++)
    { 
        fflush(stdin);
        printf("Enter student name: ");
        gets(data[i].name);
        printf("Enter student id: ");
        gets(data[i].id);
        printf("Enter Exam Marks: ");
        for(int j=0;j<3;j++)
        {
            scanf("%f",&data[i].marks[j]);
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\nName: ");
        puts(data[i].name);
        printf("Id: ");
        puts(data[i].id);
        printf("Exam Marks: ");
        for(int j=0;j<3;j++)
        {
            printf("%.2f ",data[i].marks[j]);
        }
    }
    printf("\n");
    float sum[5];
    for(i=0;i<5;i++)
    {   
        sum[i]=0;
        for(int j=0;j<3;j++)
        {
            sum[i]+=data[i].marks[j];
        }
        printf("Student %d: %.2f\n",i+1,sum[i]/3);
    }
    int store=0;
    float max=sum[0];
    for(i=0;i<5;i++)
    {
        if(max<sum[i])
        {
            max = sum[i];
            store = i;
        }

    }
    printf("Name: %s\n",data[store].name);
    printf("ID: %s\n",data[store].id);

}