#include<stdio.h>

int main()
{
    char reverse[100][100],name[100];
    int i,j=0,k=0,row;

    gets(name);

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i] != ' ')
        {
            reverse[j][k] = name[i];
            k++;
        }
        else
        {
            reverse[j][k] = '\0';
            j++;
            k=0; 
        }
    }
    reverse[j][k] = '\0';
    row = j;
    for(i=row;i>=0;i--)
    {
        for(j=0;reverse[i][j]!='\0';j++)
        {
            printf("%c",reverse[i][j]);
        }
        printf(" ");
    }
}