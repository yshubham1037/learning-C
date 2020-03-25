#include<stdio.h>
int main()
{
	double h,w,p,a;
	printf("enter the height and width of the reactangle \n");
	scanf("%le%le",&h,&w);
	p=2*(h+w);
	a=h*w;
	printf("the perimeter of the rectangle is %le \n the area of the rectangle is %le",p,a);
}