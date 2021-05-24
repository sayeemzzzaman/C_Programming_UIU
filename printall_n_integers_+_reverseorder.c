#include<stdio.h>

int main(){
	int n,i=0,check;
	printf("What do you want to do?\n1.Print n integers\n2.Print integers in reverse order.\n(Enter 1 or 2 input) ");
	scanf("%d",&check);
	if(check==1||check==2){  printf("Enter the limit: ");
	scanf("%d",&n);
	}
	else printf("Enter 1 or 2 Only");

	if(n)
	{if(check==1){
		while(i<=n)
	{
		printf("%d,",i);
		i++;
	}
}
	if(check==2)
	{ 
	while(n!=0){
		printf("%d,",n);
		n--;
	}
}
    }
	else printf("Enter numbers only.");
}