#include<stdio.h>
int main()
{
    printf("=======BD Meterological System=======");
    printf("Enter 'a', to take temparatures of all cities into 'temperatures' array of N size.\n");
    printf("Enter 'b', to find the average temparature of all the cities.\n");
    printf("Enter 'c', to count and display the # of cities which have above average temparatures.\n");
    printf("Enter 'q' to quite/exit the menu system.\n");
    printf("For any other input, display 'Invalid Input'\n");
    int n, i, j, count=0, above;
    float avg, temparatures[n], sum;
    char ch;
    printf("Enter your choice: ");
    scanf("%c ", &ch);
    if(ch=='a')
    {
        sum=0;
        printf("Enter number of cities: ");
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%f", &temparatures[i]);
            sum=sum+temparatures[i];
            count=1;
        }
        printf("Now enter your choice again: ");
        scanf("%c", &ch);
    }
    if(ch=='b')
    {
        if(count==1)
        {
            avg=sum/n;
            printf("The average temparatures is: %.2f\n", avg);
            count=2;
        }
        else if(count==0)
        {
            printf("No temparature information is found\n");
        }
        printf("Now enter your choice again: ");
        scanf("%c", &ch);
    }
    if(ch=='c')
    {
        above=0;
        if(count==2)
        {
            for(i=0; i<n; i++)
            {
                if(avg>temparatures[i])
                {
                    above++;
                }
            }
            printf("The number of cities with above average temparature is: %d\n", above);
        }
        printf("Enter your choice again: ");
        scanf("%c ", &ch);
    }
    if(ch=='q')
    {
        return 0;
    }
    if(ch!='a'||ch!='b'||ch!='c'||ch!='q')
    {
        printf("Invalid Input\n");
    }
}