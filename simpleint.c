#include<stdio.h>
int main()
{
	int p,n,r;
	printf("Enter the p,n,r:");
	scanf("%d %d %d", &p,&n,&r);

	int SI = (p*n*r)/100;
	printf("simple interest=%d", SI);
	return 0;
}

