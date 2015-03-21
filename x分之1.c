#include<stdio.h>
#include<math.h>

int main(){
	double i,x,c;
	scanf("%lf",&x);
	c=1;
	if(x>1){
		for(i=1;1/pow(x,i)>=0.000001;i++){
			c+=1/pow(x,i);
		}
		printf("%lf",c);
	}
	else printf("0");
	return 0;
}
