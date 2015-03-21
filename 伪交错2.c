#define E 0.000001
#include"math.h"
#include<stdio.h>

int main(){
	int i,k=1;
	float x,y,t=1,s,r=1;
	printf("Pleaseenterx=");
	scanf("%f",&x);
	for(s=x,y=x,i=2;fabs(r)>E;i++){
		t=t*(i-1);
		y=y*x*x;
		k=k*(-1);
		r=k*y/t/(2*i-1);
		s=s+r;
	}
	printf("S=%f\n",s);
}
