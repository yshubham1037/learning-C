//to evaluate power of the series e^x


#include<stdio.h>
#define ACCURACY 0.0001
int main()
{
	int n,count;
	float x,term,sum;
	printf("enter the value of x\n");
	scanf("%f",&x);
	n=1;
	term=1;
	count=1;
	while(n<=100)
	{
		term=term * x/n;
		sum=sum+term;
		count=count+1;
		if(term<ACCURACY)
			n=999;
		else
			n=n+1;
	}
	printf("terms=%d sum=%f\n",count,sum);
}