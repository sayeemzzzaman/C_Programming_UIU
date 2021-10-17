#include<stdio.h>
int ShowMatrix(int matr2[3][5]) //where original matrix will be shown
{
    int i,j;
    printf("Original:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",matr2[i][j]); //printing original matrix
        }
        printf("\n");
    }
}
void ScalarMultiply(int matr3[3][5]) //where matrix will get multiplied
{
    int i,j,mul_mtr[3][5],multi;
    scanf("%d",&multi);
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            mul_mtr[i][j] =  matr3[i][j]*multi; //multiplying matrix
        }
    }
    printf("\nMultiplied by %d:\n",multi);
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",mul_mtr[i][j]); //printing the multiplied matrix
        }
        printf("\n");
    }
}
int InputMatrix() //where matrix input will be taken
{
    int matr[3][5],i,j,multi;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matr[i][j]); //taking matrix input
        }
    }
    ShowMatrix(matr);
    ScalarMultiply(matr);
}


int main()
{
    InputMatrix();
}