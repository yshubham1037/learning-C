// creating and using functions

#include<stdio.h>
#include<stdlib.h>

int gcd(int x , int y);
int main()
{
	return 0;
}



int gcd(int x , int y)
{
	int temp;
	temp=0;
	while(y!=0)
	{
		temp=x%y;
		x=y;
		y=temp;
	}

	return x;
}
