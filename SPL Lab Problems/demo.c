#include<stdio.h>

int num1=-1, num2=-1;
int f1(float x);
void f2(int x, float y);
int main()
{
 num1 = 1088 % 7;
 printf("\nnum1 %d num2 %d\n",num1,num2);
 num2 = f1(num1);
 printf("\nnum1 %d num2 %d\n",num1,num2);
 f2(12, 15.0);
 printf("\nnum1 %d num2 %d\n",num1,num2);
 return 0;
}
int f1(float x) 
{
 num2 = x*num1;
 printf("\nnum1 %d num2 %d\n",num1,num2-1);
 return num2-1; //8
}
void f2(int num1, float num2)
{
 num1 = num1+num2; //27
 printf("\nnum1 %d num2 %d\n",num1,num2);
 num2 = num1-num2; //0
 printf("\nnum1 %d num2 %d\n",num1,num2);
}
