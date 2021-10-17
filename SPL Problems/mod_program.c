#include<stdio.h>

int main()
{
    int n=1,n1,mod;

    while(n!=0)
    {
        scanf("%d%d",&n,&n1);
        mod = n%n1;
        printf("MOD %d %% %d = %d\n",n,n1,mod);
    }
}

// #include<stdio.h>

// int main()
// {
//     int n=1,n1,mod;
//     while(n!=0)
//     {
//         scanf("%d%d",&n,&n1);
//         mod = n%n1;
//         printf("MOD %d %% %d = %d\n",n,n1,mod);
//     }
    
// }