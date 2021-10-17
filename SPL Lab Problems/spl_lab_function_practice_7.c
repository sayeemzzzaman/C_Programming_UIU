#include<stdio.h>
int f_sum(int num[], int n)
{
    int j,fsum=0;
    for(j=0;j<n;j++)
    {
        fsum+=num[j];
    }
    return fsum;
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int num[n],m_sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        m_sum+=num[i];
    }
    printf("Sum in Function: %d\nSum in Main: %d",f_sum(num,n),m_sum);
}