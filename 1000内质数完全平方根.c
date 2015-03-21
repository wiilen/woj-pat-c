#include"stdio.h"
#include"math.h"
#include"stdlib.h"

int isprime(int n){
	int j; 
	for(j=2;j<n;++j){
		if(n%j==0) return 0;
	}
	return 1;
}

int main(){
	int i;
	double k;
	k=sqrt(2)+sqrt(3);
	for(i=4;i<=1000;++i){
		if(isprime(i)) k+=sqrt(i);
	}
	printf("%lf",k);
	return 0;
}
