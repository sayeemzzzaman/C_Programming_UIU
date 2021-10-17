#include<stdio.h>
int find_gcd(int num1, int num2)
{
    int k,m,gcd=0,i=1;
    num1 = ( num1 > 0) ? num1 : -num1; //if the input is negetive
    num2 = ( num2 > 0) ? num2 : -num2; //then it converts to posetive

    while(i<=num1 && i<= num2)
    {
        k = num1%i;
        m = num2%i;
        if(k==0 && m==0) //if its both divisble then its a common divisor
        {
            if(gcd<i) //calculating gcd
            {
                gcd=i;
            }
        }
        i++;
    } 
    printf("GCD: %d\n",gcd);
}
int find_lcm(int num1, int num2)
{
    int lcm; //lcm will be always closest to the biggest input
    lcm = (num1 > num2) ? num1:num2; //taking the bigger input
    while(1)
    {
        if(lcm%num1==0 && lcm%num2 ==0) //if any one number is divisble by the both input then it's lcm
        {
            printf("LCM: %d\n",lcm);
            break;
        }lcm++;
    }
}
int main()
{
    int num1,num2;

    while(1)
    {
        scanf("%d%d",&num1,&num2);
        find_gcd(num1,num2);
        find_lcm(num1,num2);
    }
}