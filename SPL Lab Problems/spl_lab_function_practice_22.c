#include<stdio.h>
#include<string.h>
int find_substr(char a[], char b[])
{
    int i,j,check=1;
    for(i=0;a[i]!='\0';i++)
    {
            if(b[0]==a[i])
            {
                for(int k=0,m=i;b[k]!='\0';k++,m++)
                {
                    if(a[m]!=b[k])
                    {
                        check=0;
                        return check;
                        // printf("%c ",a[k]);
                    }
                    // else check=1;
                }
                // if(check==1)break;
            }
            else check=0;
            break;
    }
    // printf("\n");
    // puts(a);
    // puts(b);
    return check;
    // if(check==1)printf("1");
    // else printf("-1");
}
int main()
{
    char a[100],b[100],check;
    gets(a);
    gets(b);
    check = find_substr(a,b);
    if(check == 1) printf("yes\n");
	else printf("no\n");
}



// #include<stdio.h>
// #include<string.h>
// char find_substr(char a[], char b[])
// {
//     int i,j,check=1,count=0;
//     for(i=0;i<strlen(a);i++)
//     {
//         for(j=0;j<strlen(b);j++)
//         {
//             if(b[j]==a[i])
//             {
//                 for(int k=0,m=i;k<strlen(b);k++,m++)
//                 {
//                     if(a[m]!=b[k])
//                     {
//                         check=0;
//                         printf("%c ",a[m]);
//                     }
//                     else check=1;
//                 }
//                 // if(check==1)break;
//             }
//         }
//     }
//     // printf("\n");
//     // puts(a);
//     // puts(b);
    
//     if(check==1)printf("1");
//     else printf("-1");
// }
// int main()
// {
//     char a[100],b[100];
//     gets(a);
//     gets(b);
//     find_substr(a,b);
// }