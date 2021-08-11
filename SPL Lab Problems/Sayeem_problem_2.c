#include<stdio.h>

int main()
{
    int n,i=1,sq;
    while(i<=10)
    {   
        printf("Enter number: ");
        scanf("%d",&n);
        sq = n*n;
        printf("The square is: %d\n",sq);
        i++;
    }
    
}