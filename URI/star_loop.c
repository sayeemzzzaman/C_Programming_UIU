#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,line;

    scanf("%d",&line);

    for(i = 0;i < line; i++){
        for(j = 0;j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
