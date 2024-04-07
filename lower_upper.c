#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[100];
	char ch;
	printf("Enter the string:");
	scanf("%s", str);
	int i;

	while(str[i])
	{
		ch = str[i];
		putchar(toupper(ch));
		i++;
	}
	return 0;
}

