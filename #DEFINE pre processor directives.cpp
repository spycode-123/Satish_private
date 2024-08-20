//program on #define preprocessor directives
#include<stdio.h>
#define MSSG "you are an idiot"
#define TRUE 1
#define FALSE 0
#define PI 3.14159265
#define MAX 100
#define RETIRE_AGE 60
int main()
{
  printf(MSSG);
  if(TRUE){
  	printf(" the value is true");
  }else{
  	printf("false");
  }
}
