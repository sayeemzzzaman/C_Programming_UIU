//sum of natural numbers

#include<stdio.h>

int main()

{
	int num,sum=0,i;
	printf("Enter maximum sum of number: ");
	scanf("%d",&num);

	if(num)
	{ 	
		for ( i = 0; i <= num; i++)
		{
			sum+=i;
			printf("%d ",i);
		}printf("Sum : %d\n",sum);
	}
	else printf("Enter numbers only.\n");
}