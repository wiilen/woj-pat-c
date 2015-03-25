#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	int i,b[10],count;
	count=0;
	memset(b,0,sizeof(b));
	scanf("%s",a);
	if(!((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))){
		printf("%s不是合法用户名");
		return 0;
	} 
	if(strlen(a)<10){
		printf("%s不是合法用户名");
		return 0;
	}
	for(i=0;i<strlen(a);++i){
		if(a[i]=='='||a[i]=='*'){
			printf("%s不是合法用户名");
			return 0;
		}
		else if(a[i]>='0'&&a[i]<='9'){
			b[a[i]-'0']++;
		}
	}
	for(i=0;i<10;++i){
		if(b[i]!=0){
			count++;
		}
	}
	if(count<2||count>6){
		printf("%s不是合法用户名");
		return 0;
	}
	printf("%s是合法用户名");
	return 0;
}
