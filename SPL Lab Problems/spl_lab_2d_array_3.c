#include<stdio.h>

int main()
{
    int num[3][3],i,j,a,b,c,deter;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    a =num[0][0] * ((num[1][1] * num[2][2]) -  (num[1][2] * num[2][1]));

    b = - (num[0][1]) * ((num[1][0] * num[2][2]) -  (num[1][2] * num[2][0]));

    c = num[0][2] * ((num[1][0] * num[2][1]) -  (num[1][1] * num[2][0]));


    printf("%d",a+b+c);
}