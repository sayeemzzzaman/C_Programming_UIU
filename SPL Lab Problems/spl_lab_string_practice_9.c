#include<stdio.h>

int main()
{
    char str[100],x;
    int i,count=0,conv;
    gets(str);
    scanf("%c",&x);
    conv = (97>x)? x+32:x-32; //converting
    for(i=0;str[i]!='\0';i++)
    {
        if(x==str[i]|| conv == str[i])count++; //both small and capital counting
    }
    printf("%d",count);
}