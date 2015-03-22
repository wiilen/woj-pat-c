#include<stdio.h>
#include<string.h>

char a[100];

int check(int p,int q){
	if(p>q) return 1;
	if(a[p]!=a[q]) return 0;
	else return check(p+1,q-1);
}

int main(){
	int n,i,j,q,p;
	scanf("%s",a);
	p=0;
	q=strlen(a)-1;
	if(check(p,q)) printf("Yes");
	else printf("No");
	return 0;
}
