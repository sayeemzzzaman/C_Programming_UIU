#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,maiorab,max;
    scanf("%d%d%d",&a,&b,&c);
    maiorab= ((a+b+abs(a-b))/2);
    max= ((maiorab+c+abs(maiorab-c))/2);
    printf("%d eh o maior",max);

    return 0;
}
