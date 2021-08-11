#include<stdio.h>

int main()
{
       
       float n,sum=0,count=0,max=0,i,num;
       printf("How many numbers? ");
       scanf("%f",&n);

       for(i=1;i<=n;i++)
       {      
              scanf("%f",&num);
              sum+=num;
              count++;
              if(max < num)
              {
                     max=num;
              }
              
       }

       printf("The sum is: %.1f\n",sum);
       printf("The average is: %.2f\n",sum/n);
       printf("The maximum is: %.1f\n",max);

       return 0;

}