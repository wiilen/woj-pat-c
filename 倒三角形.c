#include<stdio.h>

int main(){
	int i,n,j;
	char c='*';
	scanf("%d",&n);
	for(i=0;i<n;++i){
		for(j=0;j<2*n-i-1;j++){
			if(j<i) printf(" ");
			else printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
