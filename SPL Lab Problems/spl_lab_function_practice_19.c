#include<stdio.h>
int IsPrime(int i)
{
    int check=0,j;
    for (j = 2; j <= i / 2; j++) 
    {
        if (i%j == 0) //if number is divisible then it's surely not prime
        {
            check = 1;
            break;
        }
    }
   if(check==0)return i; //if its 0 then it's a prime number
  
}
void GeneratePrime(int n)
{ //have to print the first value
    int i,prime;
    printf("Prime less than %d: ",n);
    for(i=2;i<n;i++)
    { 
            if(IsPrime(i)) //checking its 0 or not
            {
                printf(",");
                printf("%d",IsPrime(i)); //printing if its not zero
                
            }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
}