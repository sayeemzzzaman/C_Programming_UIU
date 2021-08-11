#include<stdio.h>

int main()
{
    int n,i,count=0,c=0,r=0,s=0,num,total;
    char name;
    double c2,r2,s2;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&num,&name);
        if(name == 'C')
        {
            c = c+num;
        }
        else if(name=='R')
        {
            r = r+num;
        }
        else if(name=='S')
        {
            s = s+num;
        }

    }

    total = c+r+s;
     c2 = c*100.00/total;
     r2 = r*100.00/total;
     s2 = s*100.00/total;

     printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",total,c,r,s,c2,r2,s2);
     return 0;
}