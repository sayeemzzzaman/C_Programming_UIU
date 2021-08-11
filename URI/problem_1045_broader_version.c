#include<stdio.h>

int main()
{
    double n1,n2,n3,A,B,C;
    scanf("%lf%lf%lf",&n1,&n2,&n3);

    
    if(n1<n2 && n1<n3)
    {
        C = n1;
        
        if(n2<n3)
        {   B = n2;
            A = n3;
        }
        else {
            A = n2;
            B=n3;
            }
    }
    else if(n2<n1 && n2<n3)
    {
        C = n2;
        if(n1<n3)
        {
            B = n1;
            A = n3;
        }
        else
        {
            B = n3;
            A = n1;
        }
    }
    else if(n3<n2 && n3<n1)
    {
        C = n3;
        
        if(n2<n1)
        {   B = n2;
            A = n1;
        }
        else {
            A = n2;
            B=n1;
            }
    }
    else if(n1==n2==n3)
    {
        A = n1;
        B = n2;
        C = n3;
    }
    else if(n1==n2 || n2==n3 || n1==n3)
    {
        if(n1==n2)
        {
            if(n1<n3)
            {
                C = n1;
                B = n2;
                A = n3;
            }
            else {
                A = n1;
                B = n2;
                C = n3;
            }
        }
        if(n2==n3)
        {
            if(n1<n3)
            {
                C = n1;
                B = n2;
                A = n3;
            }
            else {
                A = n1;
                B = n2;
                C = n3;
            }
        }
        if(n1==n3)
        {
            if(n1<n2)
            {
                C = n1;
                B = n3;
                A = n2;
            }
            else {
                A = n1;
                B = n2;
                C = n2;
            }
        }
    }

    
    if(A>=B+C)printf("NAO FORMA TRIANGULO\n");
    else if(A*A == (B*B)+(C*C))printf("TRIANGULO RETANGULO\n");
    else if(A*A>(B*B)+(C*C))printf("TRIANGULO OBTUSANGULO\n");
    else if(A*A<(B*B)+(C*C))printf("TRIANGULO ACUTANGULO\n");
    
    if(A==B && B==C && C==A)printf("TRIANGULO EQUILATERO\n");
    if(!(A==B && B==C && C==A)) 
    {   
        if(A==B || A==C || B==C)printf("TRIANGULO ISOSCELES\n");
    }
    






    return 0;
}