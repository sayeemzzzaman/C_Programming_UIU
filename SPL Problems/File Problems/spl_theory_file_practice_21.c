#include<stdio.h>


int main()
{
    FILE *f1,*f2;
    f1 = fopen("sample21inp.txt","r");
    if(f1 == NULL)printf("Error opening file.");
    f2 = fopen("sample21out.txt","a");
    if(f2 == NULL)printf("Error opening file.");
    int ch;

    while((ch = fgetc(f1))!= EOF)
    {
        fputc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
}