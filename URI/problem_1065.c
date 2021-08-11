#include<stdio.h>


int main()
{
    int count=0,n,i=1,even=0,odd=0,pos=0,neg=0;

    do {
        scanf("%d",&n);
        if(n%2==0)
        {
            even++;
        }
        else odd++;
        if(n>0)
        {
            pos++;
        }
        else if(n!=0)neg++;
        i++;
    }while(i<=5);

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
    return 0;
}