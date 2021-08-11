#include<stdio.h>

int main(){

    float a,b,c,area,par;
    scanf("%f%f%f",&a,&b,&c);
    
    if(a+b>c && a+c>b && b+c>a)
    {
       printf("Perimetro = %.1f\n",par = a+b+c);
    }
    else {
       
        area = 0.5 * (a+b) *c;
        printf("Area = %.1f\n",area);
   }
    return 0;
}