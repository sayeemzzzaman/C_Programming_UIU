#include <stdio.h>
#include <stdlib.h>
//5+10+15+......+990+995+1000
int main()
{
    int n,sum;

    for(n = 5,sum = 0;n <= 1000;n = n + 5){
        sum = sum + n;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
