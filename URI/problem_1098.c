#include<stdio.h>

int main()
{
    float i,j=7;

        printf("I=0 J=1\n");
        printf("I=0 J=2\n");
        printf("I=0 J=3\n");

    for(i=1;i<=9;i+=2)
    {
        printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i,j-1);
        printf("I=%d J=%d\n",i,j-2);
        j = j+2;
    }
    return 0;
}

