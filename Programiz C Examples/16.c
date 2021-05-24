#include<stdio.h>

int main()
{
	char x;
	printf("Enter a character: ");
	scanf("%c",&x);
	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		printf("%c is an Alphabet\n",x);
	else printf("It's not an Alphabet\n");
}