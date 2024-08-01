#include<stdio.h>
void main(){
	float i1,i2,pv1,pv2,avi;
	printf("Enter the item1 and item2 value\n");
	scanf("%f %f",&i1,&i2);
	printf("Enter the purchase value1 and purchase value2\n");
	scanf("%f %f",&pv1,&pv2);
	avi=(pv1+pv2)/(i1+i2);
	printf("The avergae value of item is=%f",avi);
}
