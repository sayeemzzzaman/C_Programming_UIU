#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){

	int num,i,reverse=0;
	printf("Enter your number: ");
	scanf("%d",&num);

	if(num)
		{ 
			while(num!=0)
		{
			i = num%10;
			reverse = reverse*10 + i;
			num = num/10;
		}
			printf("Reversed Number: %d\n",reverse);
	}
	else printf("Enter Numbers only.");
}