#include<stdio.h>

struct patient
{
    char name[20];
    char id[10];
    float height;
    float weight;
    int age;
};

int main()
{
    struct patient data[5];
    int i,first_range,last_range;
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        gets(data[i].name);
        gets(data[i].id);
        scanf("%f%f%d",&data[i].height,&data[i].weight,&data[i].age);
    }
    int max_height = data[0].height,max_heightid;

    for(i=0;i<5;i++)
    {
        if(max_height<data[i].height) //comparing for maximum height
        {
            max_height = data[i].height;
            max_heightid = i;
        }
    }
    printf("\nMaximum height: %s\n",data[max_heightid].id);
    printf("Give an age range: ");
    scanf("%d%d",&first_range,&last_range); //first age & last age limit
    printf("Printing patients id from age range %d to %d\n",first_range,last_range);
    for(i=0;i<5;i++)
    {
        if(data[i].age>=first_range && data[i].age<= last_range)
        {
            printf("%s\n",data[i].id); //printing the patients id
        }
    }
}