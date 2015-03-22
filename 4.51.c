#include<stdio.h>

int main(){
	int i,j,k,count=0;
	for(i=1;i<=33;++i){
		for(j=1;j<=(100-3*i)/2;++j){
			k=100-i-j;
			if((k%2==0)&&(3*i+2*j+k/2)==100){
				printf("l=%d m=%d s=%d\n",i,j,k);
				count++;
			}
		}
	}
	printf("%d",count);
}
