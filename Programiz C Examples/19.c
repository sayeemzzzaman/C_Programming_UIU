#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter a number for multiplication table: ");
	scanf("%d",&num);

	for(i=1;i<=10;i++)
	{
		//r = num*i;
		printf("%d * %d = %d\n",num,i,num*i);
	}
}