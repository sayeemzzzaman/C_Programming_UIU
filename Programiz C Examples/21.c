#include<stdio.h>

int main()
{
	int num1,num2,m,i=1,n,gcd=0;
	printf("Enter two integer number: ");
	scanf("%d%d",&num1,&num2);

	while(i<=num1 && i<=num2)
	{
		n = num1%i;
		m = num2%i;
		
		if(n==0 && m==0)
			{
				if(gcd<i)
				 {
				 	gcd = i;
				 }
			}
		i++;
	}

	printf("GCD is %d\n",gcd);
}