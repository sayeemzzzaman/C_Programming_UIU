#include<stdio.h>
#include<math.h>


int main()
{
    int n,d,digit=0,i=1,n2=0,n1,n3,n4,multi=1;
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
        while(i<=n4)
        {
            multi = multi *i;
            
            i++;
            
        }
        n2 = n2 + multi;
        n3=n3/10;
        i=1;
        multi=1;
        
       
    } 
    
    if(n2==n1)printf("It's a strong number.");
    else printf("It's not a strong number.");
}