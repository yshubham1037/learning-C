#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,d;
	printf("enter the coordinates \n");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("the distance between the points is %d",d);
}
