// sum of diagonals of a matrix

#include<stdio.h>
int main()
{
	int i,j,sum,a[i][j];
	printf("enter the elements of the matrix \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
}