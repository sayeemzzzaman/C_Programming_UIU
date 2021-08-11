#include<stdio.h>
#include<math.h>

//371 == 3*3*3 + 7*7*7 + 1*1*1 = 371 // (3,3)+(7,7)+(1,1)
int main()
{
    int n,d,digit=0,i,n2=0,n1,n3,n4;
    scanf("%d",&n);
    n1 = n;
    n3 = n;
    n4 = n;
    while(n!=0)
    {
        n = n/10;
        digit++;
        
    }
    
  
   while(n3!=0)
    {   
        n4=n3%10;
        n2 = n2 + (n4*n4*n4);
        n3=n3/10;
       
    }
    
    if(n1 == n2) printf("It's an armstrong number");
    else printf("It's not an armstrong number");
}