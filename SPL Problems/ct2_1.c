#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main(){
 a=90%5;
 b=90/5;
 printf("%d %d\n", b, a);
 a=func1(b+5.5);
 func2(12, 15.0);
 printf("a %d %d\n", a, b);
 return 0;
 }
int func1(float x) {
 b=b*a;
 func2(5, 4.5);
 return b-1;
}
void func2(int x, float y){
 printf("%d %f\n", x, y);
 return;
}