//fibonacci

#include<stdio.h>

int main()
{
	int n=0,f1=0,f2=1,next=0,i,sum=0;
	printf("Enter the number count of showing the fibonacci series: ");
	scanf("%d",&n);

	if(n)
	{	for(i=1;i<=n;i++)
		{
			printf("%d ",next);
			sum+=next;
			f1=f2;
			f2 = next;
			next = f1+f2;
		}printf("\nSum : %d",sum);
	}
	else printf("Enter numbers only.\n");
}