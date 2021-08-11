#include <stdio.h>
#include <stdlib.h>

int minimum(int x,int y)
{
    int temp;

    if(x < y){
        temp = x;
    }
    else {
        temp = y;
    }
    return temp;
}
int main()
{
    int a,b,c,small,s;

    scanf("%d%d%d",&a,&b,&c);

    s = minimum(a,b);

    small = minimum(s,c);

    printf("The smaller number is %d\n",small);
    return 0;
}
