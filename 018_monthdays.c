#include<stdio.h>
void main(){
	int value,y,m,d,rv;
	printf("Enter the value\n");
	scanf("%d",&value);
	y=value/365;
	rv=value%365;
	m=rv/30;
	d=rv%30;
	printf("The years is=%d\nThe month is=%d\nThe days is=%d",y,m,d);
}
