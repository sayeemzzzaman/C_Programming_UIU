#include<stdio.h>

int is_prime(int number)
{
    int check=0,j;
    
        for (j=2; j<=number/2;j++) 
        {
            if (number%j == 0) //if it finds any divisble then it assigns 1 and breaks it
            {
                check = 1;
                break;
            }
        }
   if(check==0 && number!=0 && number!=1)printf("The number is prime."); //manually checking if there's any input 0/1 then it will print not prime
   else printf("The number is not prime.");
  
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    is_prime(number); //calling the function
}