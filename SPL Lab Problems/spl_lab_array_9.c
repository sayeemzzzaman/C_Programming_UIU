#include<stdio.h>

int main()
{
    int n,i,count=0,j;
    scanf("%d",&n);
    char num[n],vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    for(i=0;i<n;i++)
    {
        scanf("%c ",&num[i]);
        for(j=0;j<10;j++)
        {
            if(num[i]==vowel[j])count++;
        }
    }
    printf("Count: %d",count);
}