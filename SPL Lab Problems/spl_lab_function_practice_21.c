#include<stdio.h>
#include<math.h>
int CalcMean(int array[], int num_of_elem)
{
    int mean,j,sum=0;
    for(j=0;j<num_of_elem;j++)
    {
        sum+=array[j];
    }
    mean = sum/num_of_elem;
    return mean;
}
void Calc_Std_deviation(int array[],int num_of_elem)
{   
    int j,var=0;
    float std_dev;
    for(j=0;j<num_of_elem;j++)
    {
        var += pow(array[j]-CalcMean(array,num_of_elem),2);
    }
    std_dev = sqrt(var/(float)num_of_elem);
    printf("%.2f",std_dev);
}
int main()
{
    int n,num_of_elem=0;
    scanf("%d",&n);
    int array[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        num_of_elem++;
    }
    Calc_Std_deviation(array,num_of_elem);

}