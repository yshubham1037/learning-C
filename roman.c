#include<stdio.h>
int main()
{
	int n;
	printf("enter the integers\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("I\n");
		break;
	case 2:
		printf("II\n");
		break;
	case 3:
		 printf("III\n");
		 break;
	case 4:
		printf("IV\n");
		break;
	case 5:
		printf("V\n");
		break;
	default:
		printf("character invalid\n");
		break;
	}
}