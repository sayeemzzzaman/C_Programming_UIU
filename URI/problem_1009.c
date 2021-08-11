#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,C;

    char x[10];
    scanf("%s%lf%lf",x,&A,&B);
    C = A+(B*.15);
    printf("TOTAL = R$ %.2lf\n",C);
    return 0;
}
