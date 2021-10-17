#include<stdio.h>

int main()
{
    char sent[100];
    int i,count=0;
    // int i,count=0,vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    gets(sent);
    for(i=0;sent[i]!='\0';i++)
    {
        if(sent[i]=='a'||sent[i]=='e'||sent[i]=='i'||sent[i]=='o'||sent[i]=='u'||sent[i]=='A'||sent[i]=='E'||sent[i]=='I'||sent[i]=='O'||sent[i]=='U')
        {
            count++;
        }
    }
    printf("%d",count);
}