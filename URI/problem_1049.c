#include<stdio.h>

int main()
{
    char c[10],c2[10],c3[10];
    scanf("%s%s%s",&c,&c2,&c3);
    /*if(c[0] == 'v')
    {   printf("%s",c[10]);
        if(c2[0] == 'a')
        {
            if(c3[0] == 'c') printf("aguia\n");
            else printf("pomba\n");   
        }
        else if(c2[0] == 'm')
        {
            if(c3[0] == 'o')printf("homem\n");
            else printf("vaca\n");
        }
    }
    else printf("hoynai");
}*/

if(c[0]=='v' && c2[0] == 'a' && c3[0]=='c') printf("aguia\n");
if(c[0]=='v' && c2[0] == 'a' && c3[0]=='o') printf("pomba\n");
if(c[0]=='v' && c2[0] == 'm' && c3[0]=='o') printf("homem\n");
if(c[0]=='v' && c2[0] == 'm' && c3[0]=='h') printf("vaca\n");
if(c[0]=='i' && c2[0] == 'i' && c3[2]=='m') printf("pulga\n");
if(c[0]=='i' && c2[0] == 'i' && c3[2]=='r') printf("lagarta\n");
if(c[0]=='i' && c2[0] == 'a' && c3[0]=='h') printf("sanguessuga\n");
if(c[0]=='i' && c2[0] == 'a' && c3[0]=='o') printf("minhoca\n");
return 0;
}