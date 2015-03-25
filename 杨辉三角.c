#include<stdio.h>

int c(int x,int y){
	int z;
	if(y==1||y==x+1){
		return 1;
	}
	else{
		z=c(x-1,y-1)+c(x-1,y);
		return z;
	}
}

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;++i){
		for(j=0;j<n-i-1;++j){
			printf(" ");
		}
		for(j=1;j<i+2;++j){
			printf("%d ",c(i,j));
		}
		printf("\n");
	}
	return 0;
}
