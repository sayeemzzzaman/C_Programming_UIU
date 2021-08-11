#include<stdio.h>

int main()
{
    char inp[100];
    int i,j,count=1;

     gets(inp);

    for(i=0;inp[i]!='\0';i++)
    {
        if(inp[i]==' ')
        {
            printf("\n");
            count++;
        }
        else printf("%c",inp[i]);
    }
    printf("\nNumber of words: %d",count);
}