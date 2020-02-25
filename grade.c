#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float perc=0;
	printf("enter marks of 5 subjects\n");
	scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);

	if(m1<40||m2<40||m3<40||m4<40||m5<40)
		printf("FAIL \n");
	else{
		perc=(m1+m2+m3+m4+m5)/500;
		if(perc>=90 && perc<=100)
			printf("S\n");
		else if(perc<90 && perc>=80)
			printf("A\n");
		else if(perc<80 && perc>=70)
			printf("B\n");
		else if (perc<70 && perc>=60)
			printf("C\n");
	    else if (perc<60 && perc>=50)
	    	printf("D\n");
	    else printf("FAIL\n");
		}

}

