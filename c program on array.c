//write a program to read and display n numbers using an array
#include<stdio.h>
int main()
{
	int a,i,arr[7];
	printf("enter the number of elements in array");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("entered numbers are:");
	for(i=0;i<a;i++)
	{
		printf("%d\n",arr[i]);
	}
}
