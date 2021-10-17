#include<stdio.h>
#include<math.h>
int calc_mean(int array[], int num_of_elem)
{
    int mean,j,sum=0;
    for(j=0;j<num_of_elem;j++)
    {
        sum+=array[j]; //collecting sum of all numbers
    }
    mean = sum/num_of_elem; //doing mean using formula all_numbers_sum/num_of_elem
    return mean;
}
void calc_std(int array[],int num_of_elem)
{   
    int j,var=0;
    float std_dev;
    for(j=0;j<num_of_elem;j++)
    {
        var += pow(array[j]-calc_mean(array,num_of_elem),2); //doing variance using formula (number-mean)^2+....
    }
    std_dev = sqrt(var/(float)num_of_elem); //doing deviation using formula rootover(variance/n)
    printf("Mean: %d\n",calc_mean(array,num_of_elem));
    printf("Standard deviation: %.4f",std_dev);
}
int main()
{
    int n,num_of_elem=0;
    printf("How many numbers? ");
    scanf("%d",&n); //how many input
    int array[n],i;
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        num_of_elem++; //element length
    }
    calc_std(array,num_of_elem); //calling the std function

}