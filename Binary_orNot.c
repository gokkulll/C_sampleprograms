#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);

	int j=num%10;
	if(j!=0 && j!=1)
	{
		printf("The given number is not a binary number");
	}
	
	num=num/10;
	if (num%10==0)
	{
		printf("The given number is a binary number");
	}
	return 0;
}
