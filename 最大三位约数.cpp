#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	for(i=999;i>=100;i--){
		if(n%i==0){
			printf("%d",i);
			return 0;
		}
	}
}
