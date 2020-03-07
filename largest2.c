#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?(a>c)?printf("a is the largest\n"):printf("c is the largest\n"):(b>c)?printf("b is the largest\n"):printf("c is the largest\n");
		
}
