#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2;
    f1 = fopen("input.txt","r");
    if(f1 == NULL)printf("Error opening file.");
    f2 = fopen("output.txt","w");
    if(f2 == NULL)printf("Error opening file.");
    
    int i,n;
    float *x,sum=0;
    float avg;

    fscanf(f1,"%d",&n);
    x = (float*) malloc(n*sizeof(float));

    for(i=0;i<n;i++)
    {
        fscanf(f1,"%f",(x+i));
        sum += *(x+i);
    }

    avg = sum/n;

    float max = *(x);

    for(i=0;i<n;i++)
    {
        if(max < *(x+i))
        {
            max = *(x+i);
        }
    }

    fprintf(f2,"Sum : %.1f\n",sum);
    fprintf(f2,"Average : %.1f\n",avg);
    fprintf(f2,"Maximum : %.2f",max);
    
}