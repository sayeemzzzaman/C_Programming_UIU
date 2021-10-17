#include<stdio.h>
int Power(int n1, int n2)
{
    int power=1;
    for(int i=1;i<=n2;i++)
    {
        power*=n1;
    }
    return power;
}

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("%d to the power %d is %d",n1,n2,Power(n1,n2));
}