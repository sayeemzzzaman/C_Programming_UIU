#include <stdio.h>
#include <stdlib.h>

//marks of class 6 and 7 of 10 students
int main()

{

    double maths[2][5];

    int c,r;

    printf("Input the marks of 10 students in class 6 & 10:\n");
    for(c = 0;c < 2; c++)

    {

        for(r = 0;r < 5; r++)

            {

                scanf("%lf",&maths[c][r]);

            }

    }

    for(c = 0;c < 2; c++)

        {

            for(r = 0;r < 5; r++)

                {

                    printf("Class %d Roll %d Marks %.2lf\n",c+6,r+1,maths[c][r]);

                }

        }

        return 0;

}
