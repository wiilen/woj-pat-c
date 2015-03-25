#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	int b[100],i,j,n,multi,sum=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);++i){
		if(a[i]>='A'&&a[i]<='Z'){
			b[i]=a[i]-'A'+10;
		}
		else if(a[i]>='0'&&a[i]<='9'){
			b[i]=a[i]-'0';
		}
	}
	multi=1;
	for(i=strlen(a)-1;i>=0;--i){
		sum=multi*sum+b[i];
		multi*=16;
	}
	printf("sum=%d",sum);
	return 0;
}
