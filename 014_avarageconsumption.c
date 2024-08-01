#include<stdio.h>
void main(){
	float ac,td,sf;
	printf("Enter the total distance\n");
	scanf("%fkm",&td);
	printf("Enter the spent fuel\n");
	scanf("%fli",&sf);
	ac=td/sf;
	printf("The average consumption is=%f",ac);
}
