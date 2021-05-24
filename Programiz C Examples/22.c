#include<stdio.h>

int main()
{ 
	int max1,max2,lcm,num1,num2;
	printf("Enter two integer number: ");
	scanf("%d%d",&num1,&num2);

		lcm = (num1 > num2) ? num1:num2;
		
		while(1)
		{
			if(lcm%num1 ==0 && lcm%num2 ==0)
			{
				printf("The LCM of %d and %d is %d\n",num1,num2,lcm);
				break;
			}lcm++;
		}
}