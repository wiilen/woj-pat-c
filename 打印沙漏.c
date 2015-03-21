#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int i,j,n,temp=-1,t=-1,a,re;
	char c;
	scanf("%d %c",&n,&c);
	while(n>=temp){
		re=n-temp;
		t=t+2;
		temp=temp+t*2;
	}
	t-=2;
	a=(t-1)/2;
	for(i=0;i<t;++i){
		for(j=0;j<a-abs(i-a);++j){
			printf(" ");
		}
		for(j=0;j<abs(i-a)*2+1;++j){
			printf("%c",c);
		}
		printf("\n");
	}
	printf("%d\n",re);
	return 0;
}
