#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	char*arr[2]={"even", "odd"};
	printf("The given number %d is %s", n,arr[n%2]);
	return 0;
}

