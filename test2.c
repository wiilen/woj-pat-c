#include<stdio.h>
#include<string.h>

int main(){
	char a[100],temp;
	int i,j;
	scanf("%s",a);
	for(i=0;i<strlen(a);++i){
		for(j=i;j<strlen(a);++j){
			if(a[j]<a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%s",a);
	return 0;
}
