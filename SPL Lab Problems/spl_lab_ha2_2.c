#include <stdio.h>

int main()
{
    int n,i,count=0;
    printf("How many alphabets? ");
    scanf("%d",&n);
    char alpha[n];

    printf("Enter the alphabets: ");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&alpha[i]);
        if(alpha[i]== 'a'||alpha[i]=='e'||alpha[i]=='i'||alpha[i]=='o'||alpha[i]=='u'||
			alpha[i]== 'A'|| alpha[i]== 'E'|| alpha[i]== 'I'|| alpha[i]== 'O'|| alpha[i]== 'U')
        {
            continue;
        }
		else count++;
    }
    printf("The number of constants is: %d\n",count);
    
    return 0;
}
