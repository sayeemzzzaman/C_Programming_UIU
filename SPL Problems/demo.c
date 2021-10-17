#include<stdio.h>
int a, c;
float b;
int func1(float x);
void func2(int *x, float y);
void main() {
a = 1088 % 39;
printf("a %d\n",a);
b = func1(a);
printf("b %d\n",b);
func2(&a,b);
printf("ab %d %d\n",a,b);
}
int func1(float x) {
c=x+a;
printf("c1 %d\n",c);
func2(&c, b);
printf("c2 %d\n",c);
return c;
}
void func2(int *x, float y){
*x *= 2;
y = a;
}
// #include<stdio.h>
// int a, c;
// float b;
// int func1(float x);
// void func2(int *x, float y);
// void main() 
//     {
//     a = 1083%39; //1a
//     b = func1(a); //2b
//     printf("%d",b);
//     func2(&a,b);

//     }
// int func1(float x) 
//     {
//     c=x+a; 
//     func2(&c, b); //3
//     return c;
//     }
// void func2(int *x, float y)
//     {
//     *x*=2;
//     y=a;

//     }