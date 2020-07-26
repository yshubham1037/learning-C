//deletion of an element in array

#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=o;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the  position \n");
	scanf("%d",&position);

	for(i=position;i<5;i++)
	{
		a[i-1]=a[i];
	}

	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}

}