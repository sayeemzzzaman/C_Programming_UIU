#include<stdio.h>
int ShowMatrix(int n1, int n2,int matr2[n1][n2]) //where original matrix will be shown
{
    int i,j;
    printf("Original:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",matr2[i][j]); //printing original matrix
        }
        printf("\n");
    }
}
void ScalarMultiply(int n1,int n2,int matr3[n1][n2]) //where matrix will get multiplied
{
    int i,j,mul_mtr[n1][n2],multi;
    scanf("%d",&multi);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            mul_mtr[i][j] =  matr3[i][j]*multi; //multiplying matrix
        }
    }
    printf("\nMultiplied by %d:\n",multi);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",mul_mtr[i][j]); //printing the multiplied matrix
        }
        printf("\n");
    }
}
int InputMatrix() //where matrix input will be taken
{
    int n1,n2,i,j;
    scanf("%d%d",&n1,&n2);
    int matr[n1][n2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&matr[i][j]); //taking matrix input
        }
    }
    ShowMatrix(n1,n2,matr);
    ScalarMultiply(n1,n2,matr);
}


int main()
{
    InputMatrix();
}