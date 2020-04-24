#include<stdio.h>
int main()
{
	int i,j,row,rowmax,space;
	printf("enter the number of rows \n");
	scanf("%d",&rowmax);
	for(row=1;row<=rowmax;row++)
	{
		//spaces
		for(space=(rowmax-row);space>=1;space--)
		{
			printf(" ");
		}

		//printing numbers
		for(i=row-1;i>0;i--)
		{
			printf("%d",i);
		}
		for(i=0;i<=row-1;i++)
		{
			printf("%d",i);
		}

		printf("\n");
	}
}