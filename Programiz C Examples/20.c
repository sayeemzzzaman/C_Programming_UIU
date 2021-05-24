#include<stdio.h>

int main()
{
	int n,i=0,next,t1=0,t2=1;
	printf("Enter the maximum sequence for fibonacci: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d,",t1);
		next = t1+t2;
		t1=t2;
		t2 = next;
	}
}