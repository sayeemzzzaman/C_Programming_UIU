#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,start,dif,end;

    printf("Give the starting numbers then difference and then ending numbers sequencially:");

    scanf("%d%d%d",&start,&dif,&end);

    for(n = start, sum = 0;n <= end;n = n + dif){
        sum = sum + n;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
