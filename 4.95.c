#include<stdio.h>
#include<string.h>

int main(){
	char s[100],*p,*q;
	int i,j;
	gets(s);
	printf("%s",s);
	p=s;
	q=s;
	while(*q!='\0') q++;
	q-=2;
	while(p<q){
		if(*p++!=*q--){
			printf("No\n");
			break;
		}
	}
	if(p>=q){
		printf("Yes\n");
	}
	return 0;
}
