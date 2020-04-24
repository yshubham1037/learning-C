#include<stdio.h>
int main()
{
	int i,j,temp;
	
	for(i=3;i<=100;i++)
	{
		temp=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
			printf("%d\n",i);
		
	}
	
}