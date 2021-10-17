#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int array[] = {5,6,7,8,9}, *x,i;

//     x = &array[0];
//     for(i=0;i<sizeof(array[5]);i++)
//     {
//         printf("%d ",*(x+i));
//     }
// }

int main()
{
    int n,*x,i;

    printf("How many numbers? ");
    scanf("%d",&n);

    x = (int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(x+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(x+i));
    }
}