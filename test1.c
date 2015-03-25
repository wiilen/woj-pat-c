#include<stdio.h>
#include<math.h>

int main(){
	double x,y;
	scanf("%lf",&x);
	if(x>0) y=(sqrt(x)+exp(x))/(5*x+5);
	else y=(2.0/3.0+sin(60/M_PI))*fabs(x);
	printf("%lf",y);
	printf("%lf",sin(60/M_PI));
	return 0;
}
