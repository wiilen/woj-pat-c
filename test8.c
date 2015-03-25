#include<stdio.h>

int main(){
	int i,j,sum,a[3];
	int n=543;
	i=0;
	while(n!=0){
		a[i++]=n%10;
		n/=10;
	}
	for(j=0;j<i;++j){
		printf("%d",a[j]);
	}
	return 0;
}
