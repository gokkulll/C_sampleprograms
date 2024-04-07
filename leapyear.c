#include<stdio.h>
int main()
{
	int x;
	printf("Enter the leapyear:");
	scanf("%d", &x);

	if (x%400==0)
		printf("Leap year");
	else if (x%100==0)
		printf("Not a leap year");
	else if (x%4==0)
		printf("Leap year");
	else
	{
		printf("Not a leap year");
	}
	return 0;
}
