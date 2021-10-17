#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int i,str1_len=0,j;
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str1_len++;
    }
    j = str1_len;
    for(i=0;str2[i]!='\0';i++,j++)
    {
        str1[j] = str2[i];
    }
    str1[j] = '\0';
    puts(str1);
    // for(i=0;;i++)
    // {
    //     scanf("%c",&str1[i]);
    //     if(str1[i]=='\n')break;
    //     // if((int)str1[i]==10)break;
    // }
    // for(i=0;;i++)
    // {
    //     scanf("%c",&str2[i]);
    //     if(str2[i]=='\n')break;
    // }
    // for(i=0;str1!='\0';i++)
    // {
    //     str1[i] = str2[i];
    // }
}