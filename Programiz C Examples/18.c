#include<stdio.h>

int main()
{
	int n,m,i=1;
	printf("Enter a number: ");
	scanf("%d",&n);

	if(n > 0)
	{
		for(m=1;m<=n;m++)
		{
			i*=m;
		}printf("Factorial: %d\n",i);
	}
	else if (n==0)printf("Factorial: 1\n");
	else printf("Factorial of negetive number not exist.\n");
}