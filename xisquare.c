#include<stdio.h>
int main()
{	int i;
	int x[10],total,value;
	printf("enter 10 real numbers\n");
	
	for(i=1;i<10;i++)
	{
		scanf("%d",&value);
		x[i]=value;
	}
	total=0;
	for(i=1;i<10;i++)
	{
		total=total+(x[i]*x[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
	printf("x[%d]=%2d \n",i+1,x[i]);
	}
	printf("total=%d",total);
}