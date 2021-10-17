#include<stdio.h>


int main()
{
    FILE *f1;
    f1 = fopen("sample.txt","w");
    if(f1 == NULL)printf("Error opening file.");
    int i=0,x;
    char name[20];

    while(i<3)
    {
        scanf("%d",&x);
        gets(name);
        i++;
        fprintf(f1,"%d %s\n",x,name);
    }
    

}