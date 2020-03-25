/* to print powers of 2 from 0 to 20 (both positive power and negative power) */

#include<stdio.h>
int main()
{
	int i,x;
	float y;
	printf("powers of two table \n");
	for(i=0;i<=20;i++)
	{
		if(i==0)
			x=1;
		else
			x=x*2;
		y=1/(double)x;
	printf("%d \t %f \n",x,y);
	}
}