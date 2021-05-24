#include<stdio.h>

int main()
{
	int n,i,sum=0;
	printf("Enter the maximum number of sum: ");
	scanf("%d",&n);
	i=1;

	/*for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum = %d\n",sum);

}*/


	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("Sum = %d\n",sum);
}