#include<stdio.h>


int main()
{
    FILE *f1,*f2;
    int i,sum=0,n;
    f1 = fopen("input.txt","r");
    if(f1 == NULL)printf("Error opening file.");
    f2 = fopen("output.txt","w");
    if(f2 == NULL)printf("Error opening file2.");

    for(i=0;i<10;i++)
    {
        fscanf(f1,"%d",&n);
        sum+=n;
    }
    fprintf(f2,"The sum is: %d",sum);
    fclose(f1);
    fclose(f2);
}