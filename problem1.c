#include<stdio.h>

int main()
{
    float temp;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&temp);

    temp = (temp - 32)/9 * 5;
    printf("The temperature in Celsius is: %.2f",temp);
}