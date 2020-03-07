#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter the character\n");
	ch=getchar();
	if(isalpha(ch))
		printf("the character is an alphabet\n");
	else if(isdigit(ch))
		printf("the character is a digit");
	else if(isspace(ch))
		printf("the character is a white space\n");
	else 
		printf("the character is special symbol\n");
}