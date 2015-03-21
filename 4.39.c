#include<stdio.h>

int main(){
	
	double s=1,t=1;
	int i;
	for(i=1;(i<=20)&&t>=0.001;++i){
		t=1.0/(i*(i+1));
		printf("%lf\n",t); 
		s+=t;
	}
	printf("%lf",s);
	return 0;
}
