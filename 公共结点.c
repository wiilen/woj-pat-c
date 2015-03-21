#include<stdio.h>

int main(){
	int a[1010],b[1010];
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;++i){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			if(a[i]==b[j]){
				printf("%d",a[i]);
				return 0;
			}
		}
	}
	printf("My God");
	return 0;
}
