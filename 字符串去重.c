#include<stdio.h>
#include<string.h>

int main(){
	char a[100],b[100];
	int flag[256];
	scanf("%s %s",a,b);
	int i;
	memset(flag,0,sizeof(flag));
	for(i=0;i<strlen(b);++i){
		flag[b[i]]++;
	}
	for(i=0;i<strlen(a);++i){
		if(flag[a[i]]==0) printf("%c",a[i]);
	}
	return 0;
}
