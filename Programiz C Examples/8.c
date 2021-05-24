#include<stdio.h>

int main()
{
	int int_type;
	long a;
	long long b;
	float float_type;
	double double_type;
	long double d;
	char char_type;

	printf("Size of int: %zu bytes\n",sizeof(int_type));
	printf("Size of long: %zu bytes\n",sizeof(a));
	printf("Size of long long: %zu bytes\n",sizeof(b));
	printf("Size of float: %zu bytes\n",sizeof(float_type));
	printf("Size of long double: %zu bytes\n",sizeof(d));
	printf("Size of double: %zu bytes\n",sizeof(double_type));
	printf("Size of char: %zu bytes\n",sizeof(char_type));
}