#include<stdio.h>

int main()
{
    int n,r,i=1,x=1,y=1,z,k=1,ncr;
    scanf("%d%d",&n,&r);
    z = n-r;
    while(i<=n)
    {
        x = x*i;
        i++;
    }
    i=1;
    while(i<=r)
    {
        y = y*i;
        i++;
    }
    i=1;
    while(i<=z)
    {
        k = k*i;
        i++;
    }
    ncr = x/(y*k);
    printf("%d\n",ncr);
}