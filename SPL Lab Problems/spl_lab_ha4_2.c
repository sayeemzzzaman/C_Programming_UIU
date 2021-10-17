#include<stdio.h>

int main()
{
    char n[100];
    int i,pos,count[26]={0},max=0,letter;
    gets(n);
    
    for(i=0;n[i] !='\0';i++)
    {
        if(n[i] >= 'a' && n[i] <= 'z')
        {
            pos = n[i] - 'a'; //pos = b-a = 98-97 = 1
            count[pos]++; // a b c d ~ 0 1 2 3
        }
    }
    //counting max
    for(i=0;i<26;i++)
    {
        if(max<count[i])
        {
            max = count[i];
            letter = i + 'a'; // b = 1 + 97(a)
        }
    }
    printf("%c %d",letter,max);
    

}