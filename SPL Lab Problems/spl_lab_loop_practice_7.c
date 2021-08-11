#include<stdio.h>

int main()
{
    int i=1;
    char c;
    
    
    while(c!='A') {
         
        fflush(stdin);
        scanf("%c",&c);  
        printf("Input %d:",i);
        printf("%c\n",c);
        i++;
        
    }
}