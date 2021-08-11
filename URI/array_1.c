#include <stdio.h>
#include <stdlib.h>
//marks of five students in math
int main()
{
    double maths[5] = {90.2,44,57,85,90.5};

    int roll;

    for(roll = 1;roll <= 5;roll ++){

        printf("Roll %d Marks %.2lf\n",roll,maths[roll - 1]);
    }
    return 0;
}
