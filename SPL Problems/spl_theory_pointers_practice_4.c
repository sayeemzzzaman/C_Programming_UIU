#include<stdio.h>


int main()
{
    int length=0,i;
    char name[20], *p;
    gets(name);
    p = name;
    for(;*p !='\0';p++)
    {
        length++;
    }
    printf("Length of the string %d",length);

}