#include<stdio.h>


int main()
{
    int n;
    float f;
    char c;
    scanf("%d%f%*c%c",&n,&f,&c);
    printf("%d\n%f\n%c",n,f,c);
}