#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter a letter:");
    scanf("%c",&x);
    if(x == 'A'||x == 'E'||x == 'I'||x == 'O'||x == 'U'||x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u'){
        printf("%c is vowel",x);
    }
    else {
        printf("%c is consonent",x);
    }
    return 0;
}
