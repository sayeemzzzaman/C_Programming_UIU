#include<stdio.h>
#include<math.h>

int main()
{
	int num,rem,reverse_num=0,given_num;
	printf("Enter numbers: ");
	scanf("%d",&num);
	given_num = num;
	while (given_num!=0)
	{
		rem = given_num % 10;
		reverse_num = reverse_num *10 + rem;
		given_num = given_num/10;
	}printf("Given number: %d\nReversed Number: %d\n",num,reverse_num);

	if (num == reverse_num)printf("It's a palindrome number\n");
	else printf("It's not a palindrome number\n");
}