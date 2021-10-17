#include<stdio.h>


int main()
{
    char name[100],check,max_char;
    int i,j,max=0,max_occur;
    gets(name);

    for(i=0;name[i]!='\0';i++)
    {
        check = name[i];
        max_occur=0;
        for(j=i+1;name[j]!='\0';j++)
        {
            if(check == name[j] || (check == (name[j]+32)) || (check == (name[j]-32)))
            {
                max_occur++;
            }
        }
        if(max<=max_occur)
        {
            max = max_occur;
            max_char = check;
        }
    }
    if(max_char >= 'a' && max_char <= 'z')
    { 
        printf("%c (or %c)",(max_char-32),max_char);
    }
    else printf("%c (or %c)",max_char,(max_char+32));
}