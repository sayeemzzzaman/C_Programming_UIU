#include<stdio.h>

int main()
{
    char str[100],temp;
    int i,j,len=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    // str[i] = '\0';
    puts(str);
}