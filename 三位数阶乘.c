#include<stdio.h>

int main(){
	int i,p,k,temp,sum,temp1;
	for(i=100;i<1000;++i){
		p=i;
		sum=0;
		temp=1;
		while(p!=0){
			temp=p%10;
			temp1=1;
			for(k=1;k<=temp;++k){
				temp1*=k;
			}
			sum+=temp1;
			p/=10;
		}
		if(sum==i) printf("%d\n",sum); 
	}
	return 0;
} 
