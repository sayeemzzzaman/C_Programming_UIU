#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,discriminant,quad_pos,quad_neg;
	printf("Enter coefficients of a,b&c: ");
	scanf(" %lf%lf%lf",&a,&b,&c);
	discriminant = b*b - 4*a*c;

	if ( discriminant>0)
	{
		quad_pos = (-b + sqrt(discriminant)) / 2*a;
		quad_neg = (-b - sqrt(discriminant)) / 2*a;
		printf("Root1 = %lf\nRoot2 = %lf",quad_pos,quad_neg);
	}
	else if (discriminant == 0)
	{
		quad_pos = quad_neg = -b / 2*a;
		printf("Root1 = %lf\nRoot2 = %lf",quad_pos,quad_neg);
	}

	else {
		quad_pos = (-b + sqrt(-discriminant)) / 2*a;
		quad_neg = (-b - sqrt(-discriminant)) / 2*a;
		printf("Root1 = %lf\nRoot2 = %lf",quad_pos,quad_neg);
	}

	
}