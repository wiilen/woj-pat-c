#include<stdio.h>

int split(int n,int v){
	int c[3]={1,2,5};
	if(n<0) return 0;
	if(n==0) return 1;
	if(v<0) return 0;
	else return split(n,v-1)+split(n-c[v],v);
}

int main(){
	printf("%d",split(100,2));
	return 0;
}
