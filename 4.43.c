#include<stdio.h>

int main(){
	int n,i,sum;
	printf("ÇëÊäÈën£»");
	scanf("%d",&n);
	sum=0;
	if(n>=0){
		for(i=n+1;i<2*n;i++){
			sum+=i;
		}
	}
	else{
		for(i=2*n+1;i<n;++i){
			sum+=i;
		}
	}
	printf("%d",sum);
	return 0;
}
