#include<stdio.h>

void GenNthPrime(int n)
{
    int i,j,check,count=0;
    for(i=2;;i++)
    {
        check=0;
        for(j=2;j<=i/2;j++)
        {
            if (i%j == 0) //if its find any divisble number surely not prime
            {
                check = 1;
                break;
            }
        }
        if(check==0) //if it stays zero the number is prime
        {
            count++; //counting the n'th prime number
            if(count==n)
            {
                printf("%dth Prime: %d\n",n,i);
                break;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    GenNthPrime(n);
}