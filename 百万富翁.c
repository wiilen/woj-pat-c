#include <stdio.h>

int main(){
	
	int i,j,a,b,t=1;
	for(i=1;i<=30;++i){
		b+=t;
		t*=2;
	}
	a=100000*30;
	printf("%d %d",a,b);
	return 0;
}
