#include<stdio.h>

int main()
{
	int x,y,k;
	scanf("%d",&y);
	for(x=1;x<=y;x++)
	{
		for(k=x;k<y;k++)
		{
			printf(" ");
		}
		for(k=1;k<=2*x-1;k++)
		{
			printf("*");
		}printf("\n");
	}
	for(x=y-1;x>=0;x--)
	{
		for(k=x;k<y;k++)
		{
			printf(" ");
		}
		for(k=1;k<=2*x-1;k++)
		{
			printf("*");
		}printf("\n");
	}
}