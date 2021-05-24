#include<stdio.h>

int main()
{
	int x,y,k;
	scanf("%d",&y);
	for(x=y;x>=0;x--)
	{
		for(k=x;k<y;k++)
		{
			printf(" ");
		}
		for(k=1;k<=2*x-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}