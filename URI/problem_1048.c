#include<stdio.h>

int main()
{
    float salary,new_salary,increament;
    scanf("%f",&salary);
    
    if(salary>=0 && salary<=400.00)
    {   
        new_salary = salary +(salary*0.15);
        increament = new_salary - salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",increament);
        printf("Em percentual: 15 %%\n");
        
    }
    if(salary>=400.01 && salary<=800.00)
    {   
        new_salary = salary +(salary*0.12);
        increament = new_salary - salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",increament);
        printf("Em percentual: 12 %%\n");
        
    }if(salary>=800.01 && salary<=1200.00)
    {   
        new_salary = salary +(salary*0.10);
        increament = new_salary - salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",increament);
        printf("Em percentual: 10 %%\n");
        
    }if(salary>=1200.01 && salary<=2000.00)
    {   
        new_salary = salary +(salary*0.07);
        increament = new_salary - salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",increament);
        printf("Em percentual: 7 %%\n");
        
    }if(salary> 2000.00)
    {   
        new_salary = salary +(salary*0.04);
        increament = new_salary - salary;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",increament);
        printf("Em percentual: 4 %%\n");
        
    }
    return 0;
}