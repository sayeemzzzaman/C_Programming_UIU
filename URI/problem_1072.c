#include<stdio.h>


int main()
{
    int n,num,i,in=0,out=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num>=10 && num<=20)in++;
        else out++;
        
    }

    printf("%d in\n%d out\n",in,out);
    return 0;
}