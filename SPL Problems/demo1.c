
#include<stdio.h>

int main()
{
int a = 1090 % 3 + 1;
int b = 1090%2 +1;
int c = 1090%3 + 2;
for(int i=0; i<8; i++)
{
    switch(i){ 
        case 0:
        i += a;
        printf("0 %d\n",i);
        break;
        case 1:
        i += b;
        printf("1 %d\n",i);
        break;
        case 2:
        i += a;
        printf("2 %d\n",i);
        break;
        case 3:
        i += c;
        printf("3 %d\n",i);
        break;
        case 4:
        i += b;
        printf("4 %d\n",i);
        break;
        case 5:
        i += c;
        printf("5 %d\n",i);
        break;
        default:
        i+=4;
        printf("defualt %d\n",i);
        break;
    }
}
}