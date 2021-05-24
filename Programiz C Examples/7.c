#include<stdio.h>

int main()
{
	int int_type;
	float float_type;
	double double_type;
	char char_type;

	printf("Size of int: %zu bytes\n",sizeof(int_type));
	printf("Size of float: %zu bytes\n",sizeof(float_type));
	printf("Size of double: %lu bytes\n",sizeof(double_type));
	printf("Size of char: %lu bytes\n",sizeof(char_type));
}