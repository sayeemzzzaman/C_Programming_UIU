#include<stdio.h>


int main()
{
    FILE *f1;
    f1 = fopen("sample20inp.txt","r");
    if(f1 == NULL)printf("Error opening file.");
    // f2 = fopen("sample20out.txt","w");
    // if(f2 == NULL)printf("Error opening file.");
    int i,n_line=1,ch;

    while((ch = fgetc(f1))!= EOF)
    {
        if(ch == '\n')
        {
            n_line++;
        }
    }
    printf("Number of lines %d",n_line);
    fclose(f1);
}