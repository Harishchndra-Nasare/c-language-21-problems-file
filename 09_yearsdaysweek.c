#include<stdio.h>
void main(){
	int days,weeks,years,rdays,rdays2;
	printf("Enter days here\n");
	scanf("%d",&days);
	years=days/365;
	printf("The years we need is=%d\n",years);
	rdays=days%365;
	weeks=rdays/7;
	printf("The weeks we need is=%d\n",weeks);
	rdays2=rdays%7;
	
	printf("The days we need is=%d",rdays2);
	
}
