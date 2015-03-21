#include<stdio.h>

int main(){
	double k,s=0;
	double i;
	for(i=1;i<=100;++i){
		s+=i;
	}
	for(i=1;i<=50;++i){
		s+=i*i;
	}
	for(i=1;i<=10;++i){
		s+=1/i; 
	}
	printf("%lf",s);
	return 0;
}
