#include<stdio.h>
#include<math.h>
void main(){
	int x1,x2,y1,y2,x3,y3,x,y,value,dist;
	printf("Enter the x1 and x2 value\n");
	scanf("%d %d",&x1,&x2);
	printf("Enter the y1 and y2 value\n");
	scanf("%d %d",&y1,&y2);
	x=x2-x1;
	y=y2-y1;
	x3=x*x;
	y3=y*y;
	value=x3+y3;
	dist=sqrt(value);
	printf("the distance between two points is=%d",dist);
}

