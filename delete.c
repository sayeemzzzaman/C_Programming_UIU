// #include<stdio.h>
// int main(){
//     int num[10],i,j,k;
//     printf("Enter the numbers: \n");
//     for(i=0;i<10;i++)
//     {
        
//         scanf("%d",&num[i]);
//         if(num[i]%5==0)num[i]=num[i]*3;
        
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",num[i]);
//     }   
    
    #include<stdio.h>
int main(){
    int num,i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1,k=1;j<=i;j++,k*=2)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    
    

}

