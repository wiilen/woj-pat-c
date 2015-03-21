#include<stdio.h>
#include<string.h>

int main(){
	int i,j,c;
	char a[100],b[100];
	while(scanf("%s %s",a,b)!=EOF){
		c=strlen(a)+strlen(b);
		for(i=0,j=strlen(a);i<strlen(b);++i,++j){
			a[j]=b[i];
		}
		a[c]='\0';
		printf("%s\n",a);
	}
	return 0;
}
