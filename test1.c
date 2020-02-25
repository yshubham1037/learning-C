
#include<stdio.h>

int main()
 {
 	while(1==1){
 		int n1,n2;
 	char opr;
 	printf("enter two numbers\n");
 	scanf("%d %d %c",&n1,&n2,&opr);
 	printf("calculating %d %c %d \n",n1,opr,n2);
 	
 	if (opr == '+') {
 		printf("the result is: %d \n", n1 + n2);
 	} else if (opr == '-') {
 		printf("the result is: %d \n", n1 - n2);
 	} else if (opr == '*') {
 		printf("the result is: %d \n", n1 * n2);
 	} else if( opr == '/') {
 		if( n2 == 0) {
 			printf("division by 0 not allowed\n");
 		}
 		else {
 			printf("the result is: %d \n", n1 / n2);
		}
 	} else {
 		printf("condition not valid");
 	}

 	}
 	

 }