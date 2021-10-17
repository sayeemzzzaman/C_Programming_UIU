#include<stdio.h>


int main()
{
    FILE *f1;
    f1 = fopen("spl_assi2_6.txt","r");
    if(f1 == NULL)printf("Error opening file.");
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