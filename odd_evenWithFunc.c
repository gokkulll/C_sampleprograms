#include<stdio.h>
int main()
{
	int n;
	printf("Enter the element:");
	scanf("%d", &n);
	if (n%2==0)
		printf("Even");
	else
		printf("odd");
	return 0;
}
