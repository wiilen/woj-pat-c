#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	i=1;
	while(n>i){
		n-=i;
		i++;
	}
	if(!(i%2!=0)){
		printf("%d/%d",n,i-n+1);
	}
	else printf("%d/%d",i-n+1,n);
	return 0;
}
