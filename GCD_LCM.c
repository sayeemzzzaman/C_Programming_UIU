#include<stdio.h>

int main()
{
    int num1,num2,gcd=0,i=1,k,m;
    printf("Enter two integer number: ");
    scanf("%d%d",&num1,&num2);

    num1 = ( num1 > 0) ? num1 : -num1;
    num2 = ( num2 > 0) ? num2 : -num2;

    while(i<=num1 && i<= num2)
    {
        k = num1%i;
        m = num2%i;
        if(k==0 && m==0)
        {
            if(gcd<i)
            {
                gcd=i;
            }
        }
        i++;
    }
    printf("The GCD of %d and %d is %d\n",num1,num2,gcd);


    int max1,max2,lcm;
    lcm = (num1 > num2) ? num1:num2;
    while(1)
    {
        if(lcm%num1 ==0 && lcm%num2 ==0)
        {
            printf("The LCM of %d and %d is %d\n",num1,num2,lcm);
            break;
        }lcm++;
    }
}


    