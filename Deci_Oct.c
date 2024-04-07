#include<stdio.h>
int main()
{
	int octnum=0,decinum,quotient,remainder;
	int octo[100],i=1,j;
	printf("Enter the number:");
	scanf("%d", &decinum);
	quotient = decinum;

	while (quotient!=0)
	{
		octo[i++] = quotient % 8;
		quotient = quotient / 8;
	}
	for (j=i-1;j>0;j--)
	{
		octnum = octnum*10 + octo[j];
	}
	printf("The decimal num of %d is %d", decinum,octnum);
	return 0;
}

