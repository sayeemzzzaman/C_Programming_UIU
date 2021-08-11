#include <stdio.h>
#include <stdlib.h>
//Print some numbers backwords
int main()
{
    int n[5] = {5,8,13,16,18},i;

    for(i = 4;i >= 0; i-- ){
        printf("%d\n",n[i]);
    }
    return 0;
}
