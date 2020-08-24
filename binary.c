//binary search

include<stdio.h>
int main()
{
	int key,low,high,mid,flag=0;
	int a[6]={10,20,30,40,50,60};
	key=50;
	low=0;
	high=5;

	while(low<high)
	{
		mid=(low+high)/2;
		if(mid==key)
		flag=1;
		break;

		else if(mid<key)
		{
			low=key+1;
		}

		else if(mid>key)
		{
			high=mid-1;
		}
	}

	if(flag==1)
	{
		printf("key found \n",a[mid]);
	}

}