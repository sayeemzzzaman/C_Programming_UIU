#include<stdio.h>

int main()
{
	int x,y,k;
    printf("Enter number of rows: \n");
	scanf("%d",&y);
	if(y>0)
    {   
        for(x=1;x<=y;x++)
        {
            for(k=x;k<y;k++)
            {
                printf(" ");
            }
            for(k=1;k<=2*x-1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else printf("Enter a positive Integer\n");
    return 0;
}