#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("Enter the numbers:");
	scanf("%d %d", &n1,&n2);

	max = (n1 > n2)?n1:n2;

	while(max>n1,n2)
	{
		if ((max%n1==0) && (max%n2==0))
		{
			printf("The lcm of %d and %d is %d", n1,n2,max);
			break;
		}
		max++;
	}
	return 0;
}
