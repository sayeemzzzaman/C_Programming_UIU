#include<stdio.h>

int main ()
{

	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	if(x > 0) printf("The number is positive\n");
	else if (x < 0) printf("The number is negetive\n");
	else printf("The number is Zero\n");
	return 0;
}