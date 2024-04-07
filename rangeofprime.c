#include<stdio.h>
void rangeofprime(int l,int r)
{
	int i,j,flag;

	printf("Enter the initial value:");
	scanf("%d", &l);

	printf("Enter the final value:");
	scanf("%d", &r);

	for (i=l;i<=r;i++)
	{
		if (i ==0 || i ==1)
			continue;
		flag = 1;
		
		for (j=2;j<=i/2;j++)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
		}

		if ( flag == 1) {
		printf("%d ", i);
		}
	}
}
int main()
{
	int l,r;
	rangeofprime(l,r);
	return 0;
}
	

