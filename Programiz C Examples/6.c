#include<stdio.h>

int main (){

	float x,y,quotient;
	int remainder;
	scanf("%f%f",&x,&y);
	quotient= x/y;
	remainder= (int)x% (int)y;
	printf("The quotient is %f\nThe remainder is %d\n",quotient,remainder);

}