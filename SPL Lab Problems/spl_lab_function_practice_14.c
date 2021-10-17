#include<stdio.h>
int Detect_Even(int num[], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(num[j]%2==0)printf("%d ",num[j]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    Detect_Even(num,n);
}