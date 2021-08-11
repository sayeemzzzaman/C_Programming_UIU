#include <stdio.h>
#include <stdlib.h>

int main()
{
   int pc,unit,pc2,unit2;
   float value,value2;
   scanf("%d%d%f",&pc,&unit,&value);
   value = unit*value;
    scanf("%d%d%f",&pc2,&unit2,&value2);
   value2 = unit2*value2;
   value2 = value+value2;
   printf("VALOR A PAGAR: R$ %.2f",value2);
   return 0;
}
