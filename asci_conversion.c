#include<stdio.h>

int main()
{
int inp;
printf("Do you want to enter?\n1.Number\n2.Letter\n");
scanf("%d",&inp);

if(inp==1){
        printf("Enter the number: ");
        int x;
        scanf(" %d",&x);
        printf("%c",x);}

else if(inp==2){
        printf("Enter the letter: ");
        char l;
        scanf(" %c",&l);
        printf("%d",l);
        }

else printf("error");
	return 0;
}
