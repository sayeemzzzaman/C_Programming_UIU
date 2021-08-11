#include<stdio.h>

int main()
{
    int x,n,i,guess,choice=0;
    scanf("%d\n%d",&x,&n);
    choice = n-1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&guess);
        if(guess == x)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }
        else
        {   
            
            printf("Wrong, %d Choice(s) Left!\n",choice);
            if(choice==0)printf("Player-1 wins!");
            choice--;
            
        }

    }

}