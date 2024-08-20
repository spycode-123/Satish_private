#include<stdio.h>
int main()

{
	int a,b,arr[10];
	printf("enter the number of elements in array");
	scanf("%d",&b);
	for(a=0;a<b;a++)
	{
		printf("\n arr[%d]",a);
		scanf("%d",&arr[a]);
	}
	printf("\nthe elements are:");
	for(a=0;a<b;a++)
	{
		printf("%d",arr[a]);
	}
	return 0;
}
