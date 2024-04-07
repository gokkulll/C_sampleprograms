#include<stdio.h>
int main(void)
{
	int i,j,r,c,arr[100][100];
	int ctr = 0;
	printf("Enter the rows and columns:");
	scanf("%d %d", &r,&c);
	printf("Enter the elements of the matrix: \n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 0)
				ctr++;
		}
	}

	if (ctr > ((c*r)/2))
		printf("Sparse matrix\n");
	else
		printf("Not a Sparse matrix\n");

	printf("the number of zeros on the sparse matrix is %d", ctr);

	return 0;
}
