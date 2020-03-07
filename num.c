#include<stdio.h>
int main()
{
	int a;
	printf("enter the number \n");
	scanf("%d",&a);
	(a!=0)?(a>0)?printf("the number is positive\n"):printf("the number is negative\n"):printf("the number is zero\n");
}