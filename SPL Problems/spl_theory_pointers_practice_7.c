#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*p,i,sum=0;
    
    printf("How many elements? ");
    scanf("%d",&n);

    p = (int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    printf("%d",sum);
}