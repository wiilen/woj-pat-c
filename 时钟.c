#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int i; 
	double s=0,f=0;
	scanf("%lf:%lf",&s,&f);
	if(s>=12) s-=12;
	f=f*6;
	s=s*30+f/360.0*30;
	f=fabs(f-s);
	if(f>=180) f=fabs(f-360);
	printf("%.2lf",f);
	return 0;
}
