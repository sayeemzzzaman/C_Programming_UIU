#include<stdio.h>

int main()
{
    int stu[5][5],i,j,k=0,sum[5]={0},low=1,high=0,atten=1;

    for(i=0;i<=4;i++)
    {
        printf("Enter student %d marks:\n",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&stu[i][j]);
            sum[i]=sum[i]+stu[i][j];   
        }
        if(i==0)k=sum[0];
        if(i==0&&j==0)high=stu[0][0];
        if(k>sum[i])
        {
            low = i+1;
            k = sum[i];
        }
        if(high < stu[i][0])
        {
            atten = i+1;
            high = stu[i][0];
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("Total marks of student %d: %d\n",i+1,sum[i]);
    }
    printf("Student with lowest total marks: %d\n",low);
    printf("Student with highest attendance: %d",atten);
}