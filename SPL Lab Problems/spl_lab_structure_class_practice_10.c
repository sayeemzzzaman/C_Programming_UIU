#include<stdio.h>

struct triangle
{
    int triangle_id;
    int base;
    int height;
};

int main()
{
    struct triangle data[3];
    int i,area[3];
    for(i=0;i<3;i++)
    {
        scanf("%d%d%d",&data[i].triangle_id,&data[i].base,&data[i].height);
        area[i] = (data[i].base*data[i].height)/2;
    }
    
    for(i=0;i<3;i++)printf("Area of %d = %d\n",data[i].triangle_id,area[i]);
}