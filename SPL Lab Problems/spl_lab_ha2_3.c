#include<stdio.h>
int main(){
	int n, check, i, count = 0;
	printf("How many numbers? ");
	scanf("%d",&n);
	int num[n];

	for(i=0; i<n; i++){
		scanf("%d",&num[i]);
	}

	printf("Enter the search key: ");
	scanf("%d",&check);

	for (i = 0; i < n; i++)
	{
		if(check == num[i]){
			count = 1;
			printf("Found at position %d\n",i);
		}
	}
	if(count == 0) printf("Not Found\n");
	
}