#include<stdio.h>


int main()
{
    float m[5][3];
    int i,j,sum=0,max=0;
    
    
    for(i=0;i<5;i++)
    {
        printf("Enter marks for student %d: ",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%f",&m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            sum+=m[i][j];
        }
        printf("Average marks for student %d: %d\n",i+1,sum/3);
        sum=0;
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            if (max<m[j][i])
            {
                max = m[j][i];
            }
        }
        printf("Maximum marks for subject %d: %d\n",i+1,max);
        max=0;
    }
    printf("\n");
}