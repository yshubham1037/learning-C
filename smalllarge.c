// to find the largest and the smallest in the array

#include<stdio.h>
int main()
{
	int array[50],small,large,i;

	for(i=0;i<50;i++)
	{
		scanf("%d",&array[i]);
	}

	small=a[0];
	large=a[0];

	for(i=0;i<50;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}

		if(a[i]>large)
		{
			large=a[i];
		}
	}


}