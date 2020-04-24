//to print the star pyramid


#include<stdio.h>
int main()
{
	int row,rowmax,space,star;
	printf("enter the maximum number of rows \n");
	scanf("%d",&rowmax);

	for(row=1;row<=rowmax;row++)
	{
	//spaces
	for(space=1;space<=(rowmax-row);space++)
	{
		printf(" ");
	}

	//stars
	for(star=1;star<=((row*2)-1);star++)
	{
		printf("*");
	}

	printf("\n");
	}
}