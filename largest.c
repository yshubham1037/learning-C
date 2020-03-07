#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("a is largest\n");
		else
			printf("c is the largest\n");
	}
	else
	{
		if(b>c)
			printf("b is the largest\n");
		else
			printf("c is the largest\n");
	}


}