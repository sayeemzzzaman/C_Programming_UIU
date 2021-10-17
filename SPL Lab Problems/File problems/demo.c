#include<stdio.h>

struct student
{
    char name[20];
    char id[10];
    float marks[3];
};

int main()
{
    FILE *f1,*f2;
    struct student data[5];
    f1 = fopen("inputdemo.txt","r");
    if(f1 == NULL)printf("Error opening file.");
    f2 = fopen("outputdemo.txt","w");
    if(f2 == NULL)printf("Error opening file2.");
    

    int i,j;

    for(i=0;i<5;i++)
    { 
        // fgetc(f1);
        // fflush(stdin);
        // fgets(data[i].name, 20, f1);
        // fgets(data[i].id, 20, f1);
        fscanf(f1,"%s",data[i].name);
        fscanf(f1,"%s",data[i].id);
        for(j=0;j<3;j++)
        {
            fscanf(f1,"%f",&data[i].marks[j]);
        }
    }
    // fprintf(f2,"Demo print %s\n",data[4].id);
    for(i=0;i<5;i++)
    {
        fprintf(f2," Name: %s\n",data[i].name);
        // fputs(data[i].name,f2);
        fprintf(f2," Id: %s\n",data[i].id);
        // fputs(data[i].id,f2);
        fprintf(f2,"Exam Marks: ");
        for(j=0;j<3;j++)
        {
            fprintf(f2,"%.2f ",data[i].marks[j]);
        }
        fprintf(f2,"\n");
    }
    // fprintf(f2,"\n");
    // float sum[5];
    // for(i=0;i<5;i++)
    // {   
    //     sum[i]=0;
    //     for(int j=0;j<3;j++)
    //     {
    //         sum[i]+=data[i].marks[j];
    //     }
    //     fprintf(f2,"Student %d: %.2f\n",i+1,sum[i]/3);
    // }
    // int store=0;
    // float max=sum[0];
    // for(i=0;i<5;i++)
    // {
    //     if(max<sum[i])
    //     {
    //         max = sum[i];
    //         store = i;
    //     }

    // }
    // fprintf(f2,"Name: %s\n",data[store].name);
    // fprintf(f2,"ID: %s\n",data[store].id);
    fclose(f1);
    fclose(f2);
}