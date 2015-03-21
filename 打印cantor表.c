#include<stdio.h>


int main() {
	int i,j,m,n,k=1;/*k是第一列元素的值*/
	printf("Please enter m=");
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		n=k;/*n第i行中第1个元素的值*/
		for(j=1;j<=m-i+1;j++){
			printf("%d ",n); 
			n=n+i+j;/*计算同行下一个元素的值*/
		} 
		printf("\n");
		k=k+i;/*计算下一行中第1个元素*/
	}
}
