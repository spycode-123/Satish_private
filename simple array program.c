/*write a program to read and display n numbers using array*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,arr[10];
	printf("enter any two numbers");
	scanf("%d",&a);
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("your entered numbers are:");
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
