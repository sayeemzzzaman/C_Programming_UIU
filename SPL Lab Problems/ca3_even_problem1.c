#include<stdio.h>

int main()
{
    char str[100],store,repeat;
    int i,j,check=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(check==1)break; //checking its repeated or not
        store=str[i]; //storing for check
        for(j=i+1;str[j]!='\0';j++)
        {
            if(store==str[j]) //checking duplicates
            {
                repeat = str[j];
                check=1; //proof it found a duplicate
            }
        }
    }
    printf("The first repeated character is: %c",repeat);
}