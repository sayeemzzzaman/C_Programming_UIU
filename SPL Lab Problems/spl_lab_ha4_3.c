#include<stdio.h>

int main()
{
    char str[100],row_words[100][100];
    int i,j=0,k=0,r_len,length[100],count=0,full_len=0;

    gets(str);
    for(i=0;str[i]!='\0';i++)full_len++; //full array length
    for(i=0;str[i]!='\0';i++)
    {   
        if(str[i]!=' ' && str[i]!='\0')
        {
            row_words[j][k++] = str[i]; 
            count++; //counting the length of every words
        }
        else
        {
            length[j] = count; //storing every row words length
            count=0;
            j++; //accessing next row
            k=0; //accesing first column
        }
        if(i+1==full_len) //manually counting for the last words
        {
            length[j] = count; //counting every row words length
            count=0;
            row_words[j][k] = '\0'; //adding nul to every row ends
            j++; //accessing next row
            k=0; //accessing first column
        }
    }
    
    r_len = j; //total rows

    char small[100],large[100]; 
    for(i=0;i<length[0];i++)
    {
        small[i] = row_words[0][i]; //adding first string for compare
        large[i] = row_words[0][i];
    }
    int min=length[0],max = length[0]; //storing first length for compare
    for(i=0;i<r_len;i++)
    {
        if(min > length[i]) //comparing for finding the small
        {   
            for(k=0;k<length[i];k++)
            {
                small[k] = row_words[i][k]; //storing the smalest string
                min = length[i];
           
            }small[k] = '\0'; 
        }
        if(max < length[i]) //comparing for finding the large
        {
            for(k=0;k<length[i];k++)
            {
                large[k] = row_words[i][k]; //storing the largest string  
                max = length[i];
            }
            large[k] = '\0';
            
        }
    }
    printf("The largest word is '%s' and the smallest word is '%s'",large,small);
    
}