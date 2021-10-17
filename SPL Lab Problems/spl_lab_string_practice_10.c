#include<stdio.h>

int main()
{
    char str[100],reverse[100];
    int i,j,len,check=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        reverse[j] = str[i];
        
    }
    for(i=0;i<len;i++)
    {
       if(reverse[i]==str[i])check=1;
        else 
        {check=0;break;}
    }
    if(check==1)printf("yes");
    else printf("no");
}