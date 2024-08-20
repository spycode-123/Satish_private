#include<stdio.h>
int main()
{
	int i,n,num,pos,arr[10];
	printf("enter the number of elements in an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be inserted");
	scanf("%d",&num);
	printf("enter the position where the number should enter");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
	arr[pos]=num;
	n=n+1;
	printf("the array after insertion of %d is :",num);
	for(i=0;i<n;i++)
	printf("\n arr[%d] = %d",i,arr[i]);
	return 0;
}
