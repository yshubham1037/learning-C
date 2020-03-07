#include<stdio.h>
int main()
{
	int a;
	printf("enter the number \n");
	scanf("%d",&a);
	if(a!=0)
	{
		if(a>0)
		{
			printf("the number is positive\n");
		}

		else
		{
			printf("the number is negative\n");
		}
   	}
   	else
   	{
   		printf("the number is zero\n");
   	}

}