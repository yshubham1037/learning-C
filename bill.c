////electric power bill charges

#include<stdio.h>
int main()
{
	int u;
	float rate;
	printf("enter the value of u\n");
	scanf("%d",&u);

	if(u>0 && u<=200)
		rate=0.5*u;
	else if(u>200 && u<=400)
		rate=0.65*(u-200)+100;
	else if(u>400 && u<=600)
		rate=0.8*(u-400)+230;
	else
		rate=(u-600)+390;	

	printf("the amount of the bill is %f",rate);

}