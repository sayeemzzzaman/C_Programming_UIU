#include<stdio.h>

int main()
{
    int n,i;
    float num1,num2,num3,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%f",&num1);
        scanf("%f",&num2);
        scanf("%f",&num3);
        num1*=2;
        num2*=3;
        num3*=5;
        sum = (num1+num2+num3)/10;
        printf("%.1f\n",sum);

    }
    return 0;
}