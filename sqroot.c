#include<stdio.h>
#include<math.h>
int main()
{
	int x,count=1;
	float y;
	printf("enter the five numbers in a line \n");
	read:
	scanf("%d",&x);
	if(x<0)
		printf("negative number \n");
	else{
		y=sqrt(x);
		printf("the sqaure root of the number is %f\n",y);
		}
		count=count+1;
		if(count<=5)
			goto read;
		printf("end of computation\n");

}