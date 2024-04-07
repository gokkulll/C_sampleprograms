#include<stdio.h>
int main()
{
	int n,flag=0;
	printf("Enter the number:");
	scanf("%d", &n);

	if (n==0 || n==1)
	{
		flag = 1;
	}
	for(int i=2;i<=n;i++)
	{
		if(n%2==0)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	{
		printf("Not a prime");
	}
	else
	{
		printf("Prime");
	}
	return 0;
}

