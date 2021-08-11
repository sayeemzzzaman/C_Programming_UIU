#include<stdio.h>

int main()
{
    int check[10],rem,n,i;
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%10;
        if(check[rem]==1)
        {
            //printf("Yes\n");
            break;
        }
        check[rem] = 1;
        n/=10;
    }
    if(n!=0)printf("Yes");
    else printf("No");
}