#include<stdio.h>
#include<stdbool.h>

bool powerfunc(int num) {
	if (num==0)
		return 0;

	while (num!=1) {
		if (num%2!=0)
			return 0;
		num=num/2;
	}
	return 1;
}

int main()
{
	powerfunc(31) ? printf("yes\n") : printf("no\n");
	return 0;
}
