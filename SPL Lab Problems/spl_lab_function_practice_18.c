#include<stdio.h>
void IsPrime(int n)
{
    int check=0,i;
    for (i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            check = 1;
            break;
        }
    }
    if(n==1)printf("Not Prime");
    else if(check==1)printf("Not Prime");
    else if(check==0)printf("Prime");
  
}
int main()
{
    int n;
    scanf("%d",&n);
    IsPrime(n);
}