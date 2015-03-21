#include<stdio.h>
#define N 5

int main(){
	int a[N][N]={0};
	int x,y,i,j;
	x=0;y=N/2;
	a[x][y]=1;
	for(i=2;i<=N*N;++i){
		if(i%N==0){
			x=(x+1+5)%N;
			a[x][y]=i;
		}
		else{
			x=(x-1+5)%N;
			y=(y+1+5)%N;
			a[x][y]=i;
		}
	}
	for(i=0;i<N;++i){
		for(j=0;j<N;++j){
			printf("%02d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
