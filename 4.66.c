#include<stdio.h>

int main(){
	int i,j,a[5][5],k,b[10],sum,multi;
	k=1;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			a[i][j]=k++;
			printf("%d ",a[i][j]);
		} 
		printf("\n"); 
	}
	sum=0;
	multi=1;
	for(i=0;i<=4;++i){
		sum+=a[i][i];
		if(i%2==0){
			multi*=a[i][i];
		}
	}
	printf("%d %d",sum,multi);
	return 0; 
}
