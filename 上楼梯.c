#include<stdio.h>

int ups(int a){
	if(a==1) return 1;
	if(a==0) return 1;
	else return ups(a-1)+ups(a-2);
}

int main(){
	
	int n;
	scanf("%d",&n);
	printf("%d",ups(n));
	return 0;
}
