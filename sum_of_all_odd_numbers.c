#include<stdio.h>

int main(){

	int n,i=1,odd=0;
	printf("Enter the limit of sum: ");
	scanf("%d",&n);
	printf("Odd Numbers:");
	for(i=1;i<=n;i+=2)
	{
		odd+=i;
		
		printf("%d ",i);
		
	}printf("Sum of odd numbers: %d",odd);
}