#include<stdio.h>

int n = 10;

int global ()
{
   int n=10;
    return n;
};

int main()
{
    printf("Global %d\n",n);
    n = 20;
    printf("Local %d\n",n);
    n = global();
    printf("Global %d\n",n);
}