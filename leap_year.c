#include<stdio.h>

int main()
{
	int year;
	printf("Enter the year: ");
	scanf(" %d",&year);

	if(year%400==0 || (year%4==0 && year%100!=0))printf("%d is a LeapYear\n",year);
	//else if (year%100==0)printf("%d is not a LeapYear\n",year);
	else printf("%d is not a LeapYear\n",year);
	return 0;
}