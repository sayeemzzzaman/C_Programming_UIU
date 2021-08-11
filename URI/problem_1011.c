#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
int main()
{
    double R;
    scanf("%lf",&R);
    R = (4.0/3)*pi*pow(R,3);
    printf("VOLUME = %.3lf\n",R);
    return 0;
}
