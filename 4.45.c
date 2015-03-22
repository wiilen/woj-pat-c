#include<stdio.h>

int main(){
	int i,sum,a,final;
	for(i=1;;i++){
		if(i%8==1){
			sum=i;
			sum/=8;
			if(sum%8==1){
				sum/=8;
				if(sum%8==7){
					a=sum/8;
					if((a%17==4)&&(a/8%17==15)){
						final=i;
						printf("%d",final);
						return 0;
					}
				}
			}
		}
	}
}
