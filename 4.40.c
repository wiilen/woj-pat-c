#include<stdio.h>
#include<math.h>

int main(){
	int i,t=1,k=-1;
	double x,e,sum,s;
	scanf("%lf %lf",&x,&e);
	s=sin(x);
	sum=x;
	for(i=1;fabs(sum-s)>e;++i){
		t*=2*i*(2*i+1);
		sum+=k*pow(x,2*i+1)/t;
		k*=-1;
	}
	printf("%lf\n",s);
	printf("%lf",sum);
	return 0;
}
