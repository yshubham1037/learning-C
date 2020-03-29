//to print multi table using do while loop



#include<stdio.h>
int main()
{
	int row,col,rowmax=10,colmax=12,y;
	printf("multiplication table \n");
	row=1;
	do
	{
		col=1;
		do
		{
			y=row*col;
			printf("\t%d",y);
			col++;
		}
		
		while(col<=colmax);
		printf("\n");
		row++;
	}
	while(row<=rowmax);
	
}