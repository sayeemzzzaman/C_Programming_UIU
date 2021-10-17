#include<stdio.h>

int main()
{
    char str[100];
    int i,sum=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>= '0' && str[i]<= '9')sum+=str[i]-'0';//from ascii values getting real decimal values
    }
    printf("%d",sum);
}