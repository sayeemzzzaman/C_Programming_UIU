#include<stdio.h>

struct distance
{
    int feet;
    int inch;
};


int main()
{
    struct distance data[2];

    int i,sum1=0,sum2=0;
    for(i=0;i<2;i++)
    {
        scanf("%d%d",&data[i].feet,&data[i].inch);
        sum1+=data[i].feet;
        sum2+=data[i].inch; // doing sum of all feets and all inches
    }
    
    while(sum2 >= 12) // 1 feet = 12inch
    {
        sum2 -= 12; //if inch exceeds 12 then it will converts it to feet
        sum1++;
    }
    printf("Sum: %d Feet %d Inch",sum1,sum2);
}