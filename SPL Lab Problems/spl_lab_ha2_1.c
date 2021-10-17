#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("How many numbers? ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2!=0)
        {
            sum+=num[i];
        }
    }
    printf("The sum of odd numbers is: %d",sum);
    

    return 0;
}
