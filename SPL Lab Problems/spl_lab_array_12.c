#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n],num2[n],i,j,ins,pos;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        num2[i]=num[i];
    }
    printf("Number: ");
    scanf("%d",&ins);
    printf("Position: ");
    scanf("%d",&pos);
    num[pos]=ins;
    for(i=pos+1,j=pos;i<=n;i++,j++)
    {
        num[i] = num2[j]; 
    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",num[i]);
    }
}