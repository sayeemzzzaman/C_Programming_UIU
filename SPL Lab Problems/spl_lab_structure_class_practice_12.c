#include<stdio.h>

struct player
{
    char name[20];
    char country[20];
    int runs[3];
    int wickets[3];
    int points[3];
};

int main()
{
    struct player data[2];
    int i,j;
    for(i=0;i<3;i++)
    {
        data[0].points[i] = 0;
        data[1].points[i] = 0;
    }
    for(i=0;i<2;i++)
    {
        fflush(stdin);
        gets(data[i].name);
        gets(data[i].country);
        for(j=0;j<3;j++)
        {
            scanf("%d",&data[i].runs[j]);
        }
        for(j=0;j<3;j++)
        {
            scanf("%d",&data[i].wickets[j]);
        }
    }

    for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
        { 
            if(data[j].runs[i]<=25)data[j].points[i]+=5;
            else if(data[j].runs[i]>25 && data[j].runs[i]<=50)data[j].points[i]+=10;
            else if(data[j].runs[i]>50 && data[j].runs[i]<=75)data[j].points[i]+=15;
            else if(data[j].runs[i]>75)data[j].points[i]+=20;

            if(data[j].wickets!=0)
            {
                data[j].points[i]+= data[j].wickets[i]*12;
            }
        }
    }

    for(i=0;i<3;i++)
    {
        printf("Match %d:\nSakib Al Hasan points: %d\n",i+1,data[0].points[i]);
        printf("Tamim Iqbal points: %d\n",data[1].points[i]);
    }
}