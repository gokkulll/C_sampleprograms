#include<stdio.h>
int main()
{
int i,n,arr[50],large,small;
printf("Enter the size of the array:");
scanf("%d", &n);
printf("Enter the elements of the array:");
for(i=0;i<n;i++)
{
	scanf("%d", &arr[i]);
}
large=small=arr[0];
for(i=1;i<n;i++)
{
	if(arr[i]>large)
		arr[i]=large;
	if(arr[i]<smallc program to find vowel and consonant)
		arr[i]=small;
}
printf("the largest number is:%d", large);
printf("the smallest number is:%d", small);

return 0;
}

