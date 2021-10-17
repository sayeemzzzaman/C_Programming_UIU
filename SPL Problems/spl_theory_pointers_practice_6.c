#include<stdio.h>


int main()
{
    int i,vowel = 0,consonent = 0;
    char *str,name[20];

    gets(name);

    str = name;

    for(;*str != '\0'; str++)
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            vowel++;
        }
        else
        {
            consonent++;
        }
    }

    printf("Vowel %d Consonent %d",vowel,consonent);
    
}