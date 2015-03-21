#include<stdio.h>

int splitc(int n){
	if(n<0) return 0;
	if(n==1) return 1;
	if(n==0) return 1;
	return splitc(n-2)+splitc(n-1);
}

int main(){
	int f;
	scanf("%d",&f);
	printf("%d",splitc(f));
	return 0;
}
