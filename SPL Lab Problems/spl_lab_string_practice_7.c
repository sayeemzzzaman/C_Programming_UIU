#include<stdio.h>

int main()
{
    char str[100];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c",str[i]-32);
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c",str[i]+32);
        }
        else printf("%c",str[i]);
        
    }
}