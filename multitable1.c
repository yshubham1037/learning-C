// to print a multiplication table

#include<stdio.h>
int main()
{
	int y,row,col,rowmax=12,colmax=10;
	printf("multiplication table");
	for(row=1;row<=rowmax;row++)
	{
		for(col=1;col<=colmax;col++)
		{
			y=row*col;
			printf("%4d",y);
		}
	}
	printf("\n");



}