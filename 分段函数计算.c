#include<stdio.h>
#include<math.h>

int main(){
	double x,y,c;
	scanf("%lf %lf",&x,&c);
	y=fmod(x,c);
	printf("%lf",y); 
}
