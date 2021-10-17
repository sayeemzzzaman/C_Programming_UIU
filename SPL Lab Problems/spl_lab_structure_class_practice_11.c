#include<stdio.h>

struct triangle
{
    int triangle_id;
    int base;
    int height;
};

void maximum(int area[3])
{
    int max = area[0],id=1;
    for(int i=0;i<3;i++)
    {
        if(max<area[i])
        {
            max=area[i];
            id = i+1;
        }
    }
    printf("Area of %d = %d",id,max);
}

int main()
{
    struct triangle data[3];
    int i,area[3];
    for(i=0;i<3;i++)
    {
        scanf("%d%d%d",&data[i].triangle_id,&data[i].base,&data[i].height);
        area[i] = (data[i].base*data[i].height)/2;
    }
    maximum(area);
}