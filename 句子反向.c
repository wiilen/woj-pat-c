#include<stdio.h>

int main(){
	int i,j;
	char a[100][100];
	i=0;
	while(scanf("%s",a[i++])!=EOF);
	for(j=i-1;j>0;--j){
		printf("%s ",a[j]);
	}
	printf("%s",a[0]);
	return 0;
}
