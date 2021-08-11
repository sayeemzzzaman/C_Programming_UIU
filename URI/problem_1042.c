#include<stdio.h>

int main()
{
    int n1,n2,n3,lowest,middle,max;
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1<n2 && n1<n3)
    {
        lowest = n1;
        
        if(n2<n3)
        {   middle = n2;
            max = n3;
        }
        else {
            max = n2;
            middle=n3;
            }
    }
    else if(n2<n1 && n2<n3)
    {
        lowest = n2;
        if(n1<n3)
        {
            middle = n1;
            max = n3;
        }
        else
        {
            middle = n3;
            max = n1;
        }
    }
    else if(n3<n2 && n3<n1)
    {
        lowest = n3;
        
        if(n2<n1)
        {   middle = n2;
            max = n1;
        }
        else {
            max = n2;
            middle=n1;
            }
    }
    printf("%d\n%d\n%d\n\n",lowest,middle,max);
    
    printf("%d\n%d\n%d\n",n1,n2,n3);
    return 0;
}