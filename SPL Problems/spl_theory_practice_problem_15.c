#include<stdio.h>

int main()
{
    double n = 123.098;

    printf("(a) Val:%16.6lf\n",n);
    printf("(b) Val:%lf\n",n);
    printf("(c) Val:%.2lf\n",n);
    printf("(d) Val:%.0lf\n",n);
    printf("(e) Val:%e\n",n);
}