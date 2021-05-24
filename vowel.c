#include<stdio.h>

int main()
{
	int uppercase,lowercase;
	char num;
	printf("Enter your letter: ");
	scanf(" %c",&num);
	uppercase= ( num=='A' || num=='E' || num=='I' || num=='O' || num=='U');
	lowercase= ( num=='a' || num=='e' || num=='i' || num=='o' || num=='u');

	
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))

	{
		if (uppercase == 1 || lowercase ==1)printf(" %c is a Vowel\n",num);
		else printf(" %c is a consonent",num);
	}

	else printf("This is not a letter.\n");
	return 0;
}