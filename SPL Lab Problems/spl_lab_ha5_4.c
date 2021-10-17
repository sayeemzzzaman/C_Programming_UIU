#include<stdio.h>

int mystrlen(char s[])
{
    int i,len=0;
    for(i=0;s[i]!='\0';i++)
    {
        len++; //counting the length of the array
    }
    return len;
}
void mystrrev(char s[])
{
    int i,j,len;
    len = mystrlen(s);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",s[i]); //printing reverse array
    }
    
}
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    printf("%d\n",mystrlen(s)); //printing the length of the array
    mystrrev(s); //calling the function to print the reverse
}