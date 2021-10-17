#include<stdio.h>

int main()
{
    int n1,n2,i;
    scanf("%d",&n1);
    int num1[100],temp[100];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&num1[i]);
        temp[i] = num1[i];
    }
    scanf("%d",&n2);
    int num2[100];

    for(i=0;i<n2;i++)
    {
        scanf("%d",&num2[i]);
        num1[i] = num2[i];
    }
    for(i=0;i<n1;i++)
    {
        num2[i] = temp[i];
    }
    printf("Array A : ");
    for(i=0;i<n2;i++)printf("%d ",num1[i]);
    printf("\nArray B : ");
    for(i=0;i<n1;i++)printf("%d ",num2[i]);
    

}