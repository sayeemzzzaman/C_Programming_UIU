#include<stdio.h>
#include<math.h>

int main()
{   
    double y,p,power;
    int n,x,i,j,l,z=1,m;
    long long k=1;
    scanf("%d",&x);
    
    
    y=x;
    for(i=1,j=3,m=3;i<=10;i++,j+=2)
    {
        for(z=1;z<=j;z++)
        {
            k = k*z;
            
        }
        
        
        l = pow(x,j);
        
        power = (double)l/(double)k;
    
        if(j==m)
        {
            p = power* -1;
           
            m+=4;
            y = y + p ;
        }
        else {
            y = y+power;
        }
        
        k=1;
       
    }
    printf("%.3lf\n",y);
}