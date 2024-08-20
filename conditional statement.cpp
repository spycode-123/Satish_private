#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter two inputs:");
	scanf("%d %d",&a,&b);
	max=a>b?a:b;
	printf("Larger of %d and %d is %d",a,b,max);
	return 0;
}
