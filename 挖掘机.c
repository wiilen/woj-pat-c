#include<stdio.h>
#include<string.h>

int main(){
	int n,i,max=0,maxi=0;
	int a[100010],b[100],tempnum,tempscore;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%d %d",&tempnum,&tempscore);
		a[tempnum]+=tempscore;
	}
	for(i=0;i<n;++i){
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
	}
	printf("%d %d",maxi,max);
	return 0;
}
