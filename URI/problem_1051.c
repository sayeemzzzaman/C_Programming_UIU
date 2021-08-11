#include<stdio.h>

int main()
{
    float salary,tax,n_salary;
    scanf("%f",&salary);
    if(salary > 2000)
    {
        n_salary= salary - 2000;
        
        if(n_salary> 0 && n_salary <= 3000)
        {
            n_salary = n_salary * 0.08;
            
        }
        printf("%.2f",n_salary);
    }
}