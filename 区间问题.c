#include<stdio.h>

int main(){
	int n,b[10010],c,i,j,intag,outtag,s;
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%d",&b[i]);
	}
	scanf("%d",&c);
	for(i=0;i<n;++i){
		s=0;
		for(j=i;j<n;++j){
			s+=b[j];
			if(s==c) {
				printf("%d %d",i+1,j+1);
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}
