#include<stdio.h>

int main()
{
    int n1,n2,gcd=0,k,m,lcm;
    scanf("%d%d",&n1,&n2);

    n1 = (n1>0)? n1:-n1;
    n2 = (n2>0)? n2:-n2;

    for(int i=1;i<=n1 && i<= n2;i++)
    {
        k = n1%i;
        m = n2%i;
        if(k == 0 && m == 0)
        {
            if(gcd<i)
            {
                gcd =i;
            }
        }
    }
    printf("GCD %d\n",gcd);

    lcm = (n1>n2)? n1:n2;
    
    while(1)
    { 
        if(lcm%n1==0 && lcm%n2==0)
        {
            printf("LCM %d",lcm);
            break;
        }
        lcm++;
    }
}