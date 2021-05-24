#include<stdio.h>

int main(){

	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if (num%2==0)printf("It is an even number");
	else printf("It's a odd number\n");
	return 0;
}