#include<stdio.h>

int main()
{
    char str[100],reverse[100];
    int i,j,len;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        reverse[j] = str[i];
    }
    reverse[j] = '\0';
    puts(reverse);
}