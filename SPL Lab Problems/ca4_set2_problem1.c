#include<stdio.h>
float Avg_Mark(float marks[])
{
    int i;
    float sum=0,avg;
    for(i=0;i<5;i++)
    {
        sum+=marks[i]; //calculating the sum for avg
    }
    avg = sum/5; //fixed five numbers of avg
    return avg;
}
void Detect_Fword(char name[])
{
    int i,j;
    char initial[100];
    initial[0] = name[0]; //manually taking the first letter
    for(i=0,j=1;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            initial[j]=name[i+1]; //taking the next word after detecting a space
            j++;
        }
        initial[j] = '\0';
    }
    printf("The initial is : ");
    puts(initial);
}
int main()
{
    char name[100];
    int i=0;
    float marks[5],avg;
    printf("Enter student name: ");
    gets(name);
    printf("Enter five exam marks: ");
    while(i<5)
    {
        scanf("%f",&marks[i]); //taking marks input
        i++;
    }
    Detect_Fword(name);
    avg = Avg_Mark(marks);
    printf("Average marks is: %.1f",avg);

}