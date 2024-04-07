#include<stdio.h>
int main()
{
	char c,upper_case,lower_case;
	printf("Enter the element:");
	scanf("%c", &c);
	lower_case =((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'));
	upper_case =((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'));

	if (lower_case || upper_case)
	{
		printf("Vowel");
	}
	else
	{
		printf("consonent");
	}
	return 0;
}

