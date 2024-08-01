#include<stdio.h>
void main(){
	float id,twh,arph,sallery;
	printf("Enter the employe ID\n");
	scanf("%f",&id);
	printf("Enter total work hours\n");
	scanf("%f",&twh);
	printf("Enter the amount recived per hours\n");
	scanf("%f",&arph);
	sallery=(twh)*(arph);
	printf("The ID of empolye is=%f\nThe sallery recived per month is=%f",id,sallery);
}
