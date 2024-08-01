#include<stdio.h>
void main(){
	int amt,thousand,fivehund,hundered,fifty,twenty,ten,five,rthou,rfivhun,rhund,rfift,rtwent;
	printf("Enter the amount");
	scanf("%d",&amt);
	thousand=amt/1000;
	rthou=amt%1000;
	fivehund=amt/500;
	rfivhun=amt%500;
	hundered=amt/100;
	rhund=amt%100;
	fifty=amt/50;
	rfift=amt%50;
	twenty=amt/20;
	rtwent=amt%20;
	ten=amt/10;
	five=amt%10;
	printf("thousnds notes we need is=%d\nfivehunderd notes we need is=%d\nhundereds notes we need is=%d\nfifty notes we need is=%d\ntwenty rupees notes we need is=%d\nten rupees notes we need is=%d\nfive rupees we need is=%d",thousand,fivehund,hundered,fifty,twenty,ten,five);
}
