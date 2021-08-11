#include <stdio.h>
#include <stdlib.h>

int square(int x)
{
    int y;

    y = x*x;

    return y;
}
int main()
{
    int a,sqr;

    scanf("%d",&a);

    sqr = square(a);

    printf("The square of %d is %d\n",a,sqr);

    return 0;
}
