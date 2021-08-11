#include<stdio.h>

int main()
{
    float n1,n2,n3,n4,n5,n6;
    int count=0;
    scanf("%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6);


    if(n1>0)count++;
    if(n2>0)count++;
    if(n3>0)count++;
    if(n4>0)count++;
    if(n5>0)count++;
    if(n6>0)count++;

    printf("%d valores positivos\n",count);
    return 0;
}





