#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter three input of a triangle:\n");
	scanf("%d%d%d",&x,&y,&z);

	if (x+y+z==180 && 0<x<180 && 0<y<180 && 0<z<180)printf("It's a valid Triangle\n");
	else printf("It's not a valid Triangle\n");
	return 0;
}