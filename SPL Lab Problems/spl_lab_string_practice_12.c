#include<stdio.h>

int main()
{
    char str[100],x[100],store[100];
    int i,j,count=0,check=0,len,output=0;
    gets(str);
    gets(x); //input word
    for(i=0;x[i]!='\0';i++)
    {
        len++; //getting length of the word
    }
    for(i=0;str[i]!='\0';i++)
    {
        count++;
        if(str[i]==' ' && count==len)
        {
            for(j=0;j<len;j++)
            {
                if(x[j]==str[i])
                {
                    check++;
                    output=1;
                    // store[j] = str[j];
                }
                else output=0; 
                
            }
        }
        // else if(str[i]!=' ')continue;
        
    }
    
        // puts(store);
    printf("%d",check);
   
}