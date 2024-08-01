#include<stdio.h>
void main(){
	int time,h,m,s,rtm;
	printf("Enter the time");
	scanf("%d",&time);
	h=time/3600;
	rtm=time%3600;
	m=rtm/60;
	s=rtm%60;
	printf("hours is=%d\nminutes is=%d\nsecond is=%d",h,m,s);
}
