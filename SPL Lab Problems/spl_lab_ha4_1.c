#include<stdio.h>

int main()
{
    char string1[100],string2[100];
    int n,i,j;
    printf("Enter string 1: ");
    gets(string1);
    printf("Enter number of characters: ");
    scanf("%d",&n);
    printf("String 2 is: ");
    for(i=0;i<n;i++)
    {
        string2[i] = string1[i]; //copying the string
    }
    printf("String 2 is: ");
    for(i=0;i<n;i++)
    {
        printf("%c",string2[i]);
    }
}