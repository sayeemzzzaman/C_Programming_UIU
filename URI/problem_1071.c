#include<stdio.h>

int main()
{
    int n1,n2,sum=0,i;
    scanf("%d%d",&n1,&n2);

    if(n1<n2)
    {
        for(i=n1+1;i<n2; i++) //n1=6 n2=10
        {
            if(i%2!=0)
            {
                sum+=i;
                printf("Hoyni");
            }
        }
    }
    else if(n2<n1)
    {
        for(i=n2+1;i<n1; i++) //n2=-5 n1=6
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
        printf("%d\n",sum);
        return 0;
}