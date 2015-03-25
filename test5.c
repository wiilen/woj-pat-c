#include<stdio.h>
# define N 5

int main(){
	int x,y,i,j;
	int a[N][N];
	x=0;y=N/2;
	a[x][y]=1;
	for(i=2;i<=25;++i){
		if(i%N==0){
			x=(x+1)%5;
			a[x][y]=i;
		}
		else{
			x=(x-1+5)%5;
			y=(y+1)%5;
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
