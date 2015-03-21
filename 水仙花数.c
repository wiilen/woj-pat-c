#include<stdio.h>
#include<math.h>

int main(){
	int n,a[100],sum,m;
	scanf("%d",&n);
	m=n;
	int i=0,j;
	while(n!=0){
		a[i]=n%10;
		n/=10;
		i++;
	}
	sum=0;
	for(j=0;j<i;++j){
		sum+=pow(a[j],3);
	}
	if(sum==m) printf("yes");
	else printf("no");
	return 0;
} 
