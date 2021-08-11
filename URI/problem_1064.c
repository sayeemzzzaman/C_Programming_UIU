#include<stdio.h>


int main()
{
    float n,i=1,sum=0;
    int count=0;

    do {
        scanf("%f",&n);
        if(n>0)
        {
            count++;
            sum+=n;
        }
        i++;
    }while(i<=6);

    printf("%d valores positivos\n%.1f\n",count,sum/count);
    return 0;
}