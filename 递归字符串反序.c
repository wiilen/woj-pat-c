#include<stdio.h>
#include<string.h>

char a[100];

int inverse(int q){
	if(q<0){
		return 0;
	}
	if(q>=0){
		printf("%c",a[q]);
		return inverse(q-1);
	}
}

int main(){
	scanf("%s",a);
	int q;
	q=strlen(a)-1;
	inverse(q);
	return 0;
}
