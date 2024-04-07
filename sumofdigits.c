#include<stdio.h>
int main()
{
	int n,m;
	int sum = 0;

	printf("Enter the number:");
	scanf("%d", &n);

	while (n>0)
	{
		m = n % 10;
		n = n / 10;
		sum = sum + m;
	}
	printf("The Sum is :%d", sum);
	return 0;
}


