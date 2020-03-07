#include<stdio.h>
int main()
{
	float f,c;
	printf("enter the temperature in fahrenheit\n");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("the value of temp in celcius = %f",c);

}
