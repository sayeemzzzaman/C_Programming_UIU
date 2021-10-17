#include<stdio.h>


int main()
{
    int i,vowel = 0,consonent = 0;
    char *str,name[100];

    gets(name);

    str = name;

    for(;*str != '\0'; str++)
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            vowel++;
        }
        else if((*str>='A' && *str<='Z') || (*str>='a' && *str<='z'))
        {
            consonent++;
        }
    }

    printf("Vowel %d Consonent %d",vowel,consonent);
    
}