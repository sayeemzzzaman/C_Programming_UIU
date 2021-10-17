#include<stdio.h>
void Show_Converted_Number(int len,int rem[len])
{
    int i;
    for(i=len-1;i>=0;i--)printf("%d",rem[i]); //printing the output
}

void Convert_Number(int num, int base)
{
    int rem[100],i=0,len=0;
    while(num!=0)
    {
        rem[i] = num%base; //taking reminder
        num/=base; //dividing to prepare for next reminder
        len++; //counting the reminder for printing output
        i++;
    }
    Show_Converted_Number(len,rem);
}

void Get_Number_And_Base()
{
    int num,base;
    scanf("%d%d",&num,&base);
    if(base>=2 && base<=16) //base limited from 2 to 16
    {
        Convert_Number(num,base);
    }
    else printf("Base not within proper range!");
    
}

int main()
{
    Get_Number_And_Base();
}