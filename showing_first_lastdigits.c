#include<stdio.h>
#include<math.h>

int main(){
	int n,first_digit,last_digit,count_digits=0,p,x;
	scanf("%d",&n);
	x =n;
	while(n!=0)
    {
        n=n/10;
        count_digits++;
    }
    p= pow(10,count_digits-1);
   
	last_digit = x%10;
	first_digit= x / p;
			
	printf("First digit: %d\nLast digit: %d\n",first_digit,last_digit);
		
			


	
}