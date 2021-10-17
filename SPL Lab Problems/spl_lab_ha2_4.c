#include<stdio.h>
int main(){
	int num[15], i, j, count[10] = {0};

	printf("Enter the numbers: ");

	for(i=0; i<15; i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0; i<15; i++){
		for(j=0; j<=9; j++){
			if(num[i] == j)	count[j]++; 
		} 
															  
	}

	printf("The frequencies of the numbers are: ");

	for(i=0; i<10; i++){
		printf("%d ",count[i]);
	}
}