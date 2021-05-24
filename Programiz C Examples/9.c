#include<stdio.h>

int main()
{
	int first,second,temp;
	scanf("%d%d",&first,&second);

	temp = first;
	first = second;
	second = temp;
	
	printf("After Swapping %d %d",first,second);
}