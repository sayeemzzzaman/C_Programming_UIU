#include<stdio.h>

int main()
{
    char n[100];
    int i,len=0;
       
    for(i=0;;i++)
    { 
        scanf("%c",&n[i]);
        if(n[i]=='\n')break;
        len++;
    }
    printf("%d\n",len);
}