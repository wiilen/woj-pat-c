#include<stdio.h>


int main() {
	int i,j,m,n,k=1;/*k�ǵ�һ��Ԫ�ص�ֵ*/
	printf("Please enter m=");
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		n=k;/*n��i���е�1��Ԫ�ص�ֵ*/
		for(j=1;j<=m-i+1;j++){
			printf("%d ",n); 
			n=n+i+j;/*����ͬ����һ��Ԫ�ص�ֵ*/
		} 
		printf("\n");
		k=k+i;/*������һ���е�1��Ԫ��*/
	}
}
