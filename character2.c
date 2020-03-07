#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter the character\n");
	ch=getchar();
	switch(ch)
	{
	case'digit':
		printf("the character is a digit\n");
		break;
	case'alpha':
		printf("the character is an alphabet\n");
		break;
	case'space':
		printf("the character is a white space\n");
	}
	
}
