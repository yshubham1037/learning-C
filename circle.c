#include<stdio.h>
#define pi 3.14
int main()
{
	float r,A,C;
	printf("enter the value of radius \n");
	scanf("%f",&r);
	C=2*pi*r;
	A=pi*r*r;
	printf("the circumference of the circle is %f\n the area of the circle is %f",C,A);
}