#include<stdio.h>
int main()
{
	int a,b,temp;
	int *ptr1,*ptr2;
	printf("Enter the two numbers:");
	scanf("%d %d", &a,&b);

	printf("\nbefore swapping, a = %d and b = %d\n", a,b);

	ptr1 = &a;
	ptr2 = &b;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("after sapping, a= %d and b = %d", a,b);
	return 0;
}


