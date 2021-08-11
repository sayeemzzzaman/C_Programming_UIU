//fibonacci

#include<stdio.h>

int main()
{
	int n,f1=0,f2=1,next=0,i,sum=0;
	scanf("%d",&n);

		for(i=1;i<=n+1;i++)
		{
            if(next!=0)
            { 
                
			printf("%d",next);
            if(i<=n)printf(",");
            }
			
			f1=f2;
			f2 = next;
			next = f1+f2;
		}

        return 0;
	
}