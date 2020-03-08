#include<stdio.h>
int main()
{
	// two numbers start with zero,keep printing their 
	//addition while their product is less than 100
	//x increases by 1 and y increases by 2 every term
	
	
	int x=15, y=0;
	while( x >= 5 && x * y <= 100)
	{
		printf("x=%d, y=%d, x+y=%d\n",x,y,x+y);
	 	x=x-3;
	 	y=y+2;
	
	}
}