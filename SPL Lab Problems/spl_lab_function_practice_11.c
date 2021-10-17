#include<stdio.h>
int Str_Length(char str[])
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char str[100];
    gets(str);
    printf("%d",Str_Length(str));
}