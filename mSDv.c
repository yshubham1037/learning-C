//mean,standdard deviation and variance


#include<stdio.h>
#include<math.h>
#define N 50
void main()
{

 int i,j,n;
 float mean,sum=0.0,sumsq=0.0,meansqdiff,sd;
 float num[N],diff[N];


 printf("\nEnter number of terms\n");
 scanf("%d",&n);
 

 printf("\nEnter Numbers\n");
 for(i=0;i<n;i++)
 {
  scanf("%f",&num[i]);
  sum+=num[i];
 }
 
 
 mean=(float)(sum/n);
 printf("\nMean for given numbers is %f\n",mean);



 for(i=0;i<n;i++)
 {
  diff[i]=(num[i]-mean)*(num[i]-mean);
  sumsq+=diff[i];
 }
 
 
 meansqdiff=(float)(sumsq/n);
 

 sd=(float)(sqrt(meansqdiff));
 

 printf("\nVariance =%f\n",meansqdiff);
 
 printf("\nStandard Deviation=%f\n",sd);

}
