#include<stdio.h>
#include<string.h>

int main(){
	int i,j;
	long int f[90];
	f[0]=1;
	f[1]=1;
	for(i=2;i<=40;++i){
		f[i]=f[i-1]+f[i-2];
		printf("%d½×ÌÝÉÏÂ¥:%d\n",i,f[i]);
	}
	return 0;
}
