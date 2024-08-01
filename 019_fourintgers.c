#include<stdio.h>
void main(){
	int p,q,r,s;
	printf("Enter the 4 values\n");
	scanf("%d %d %d %d",&p,&q,&r,&s);
	if(r>=0&&s>=0){
		printf("r and s is positive\n");
	}if(p/2==0){
		printf("p is even\n");	
	}if(p+q>r&&s>q){
		printf("its the correct value\n");
	}else{
		printf("its the wrong value");
	}
}
