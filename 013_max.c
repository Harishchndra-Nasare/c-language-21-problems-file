#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("Enter the three numbers here\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3){
		printf("num1 is greter number");
	}if(num2>num1&&num2>num3){
		printf("num2 is grete number");
	}if(num3>num1&&num3>num2){
		printf("num3 is greter number");
	}
}
