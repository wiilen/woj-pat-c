#include<stdio.h>

int main(){
	
	int n,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		s+=1.0/(i*(i+1));
	}
	printf("%d",s);
	return 0;
}
