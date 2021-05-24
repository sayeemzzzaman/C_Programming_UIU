#include<stdio.h>

int main()
{
	int n,i=1,x,factorial=1;
	printf("Enter the number: ");
	scanf("%d",&n);

	while(i<=n)
	{
		x=i*n;
		factorial=x*factorial;
		n--;
	}
	printf("Factorial: %d",factorial);
}