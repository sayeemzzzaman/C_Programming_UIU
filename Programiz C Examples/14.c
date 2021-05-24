#include<stdio.h>

int main()
{
	int x;
	printf("Enter your year:");
	scanf("%d",&x);
	if ((x%400==0 || x%4==0)&&(x%100!=0))printf("%d is LeapYear\n",x);
	else printf("%d is not a LeapYear\n",x);
}