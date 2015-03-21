#include<stdio.h>
#include<math.h>

int main(){
	double x,t,r,y,s,temp;
	int i;
	scanf("%lf",&x);
	s=x;
	temp=1;
	t=1;
	for(i=1;fabs(temp)>=0.000001;++i){
		t=t*i;
		temp=pow(x,2*i+1)/(2*i+1)/t;
		if(i%2!=0){
			s-=temp;
		}
		else s+=temp;
	}
	printf("%lf",s);
	return 0;
}
