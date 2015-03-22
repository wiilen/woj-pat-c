#include<stdio.h>

int splitc(int n,int v){
	int c[3]={1,2,5};
	if(n<0) return 0;
	if(n==0) return 1;
	if(v<0) return 0;
	else return splitc(n,v-1)+splitc(n-c[v],v);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",splitc(n,2));
	return 0;
}
