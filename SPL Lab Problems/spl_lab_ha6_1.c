#include<stdio.h>

struct data
{
    int year;
    int month;
    int day;
};

int main()
{
    struct data date[5];
    int i;
    printf("Enter Year.Month.Day:\n");
    for(i=0;i<5;i++)
    { 
        scanf("%d%d%d",&date[i].year,&date[i].month,&date[i].day); //taking date inputs
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("Year: %d\nMonth: %d\nDay: %d\n",date[i].year,date[i].month,date[i].day); //printing all the records
    }
    int old_year=date[0].year,old_month=date[0].month,old_day=date[0].day,year_index=0; //taking the first value

    for(i=1;i<5;i++)
    {
        
        if(old_year == date[i].year) //checking if input has same year
        {
            if(date[year_index].month == date[i].month) //checking if input has same month
            {
                if(date[year_index].day > date[i].day) //taking the oldest day
                {
                    old_day = date[i].day; //assigning the oldest day
                    year_index = i; //storing the index for printing later
                }
            }
            else if(date[year_index].month > date[i].month) //taking the oldest month
            {
                old_month = date[i].month; //assigning the oldest month
                year_index = i; //storing the index for printing later
            }
        }
        else if(old_year > date[i].year) //if there is no same year then just prints the oldest year with day & month
        {
            old_year = date[i].year; //taking the oldest year
            year_index = i; //storing the index for printing later
        }
    }

    printf("\nThe Oldest Date %d.%d.%d\n",date[year_index].day,date[year_index].month,date[year_index].year);

    printf("\nPrinting the dates that fall on a leap year:\n");
    for(i=0;i<5;i++) //condition for checking leap_year
    {
        if(date[i].year%400==0 || (date[i].year%4==0 && date[i].year%100!=0))printf("%d.%d.%d\n",date[i].day,date[i].month,date[i].year);
    }
    int inp_month;
    printf("\nEnter a month: ");
    scanf("%d",&inp_month);

    for(i=0;i<5;i++) //printing the dates that fall on the input month
    {
        if(inp_month == date[i].month)printf("%d.%d.%d\n",date[i].day,date[i].month,date[i].year);
    }
}