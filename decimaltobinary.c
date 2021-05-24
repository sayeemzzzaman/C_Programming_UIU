#include <math.h>
#include <stdio.h>
int convert(int n);
int main() {
    int n,x,count=0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    x = convert(n);
while(x!=0)
	{
		x = x/10;
		count++;
	}printf("Number of digits: %d",count);
    return 0;

}

int convert(int n) {

    int rem, i = 1,binary=0;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
        
    }printf("Binary Number: %d\n",binary);
    return binary;
}