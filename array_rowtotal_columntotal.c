#include<stdio.h>

int main()
{
    int n[5][5],i,j,k,row[5],sum=0,column[5];
    
    for(i=0;i<5;i++)
    {
        printf("Enter row %d: ",i+1);
        for(j=0;j<5;j++)
        {
            
            scanf("%d",&n[i][j]);
            sum =sum + n[i][j];
          
        }
        row[i] = sum;
        sum = 0;
        
    }
    printf("\n");
    printf("Row total:");
    for(i=0;i<5;i++)
    {
        printf(" %d ",row[i]);
       
    }
    printf("\n");
    printf("Column total: ");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sum = sum + n[i][j];
        }
        column[j] = sum;
        sum =0;
    }
    for(j=0;j<5;j++)
    {
        printf(" %d ",column[j]);
       
    }
}