#include<stdio.h>

int main(){
	int i,j,num[10],a;
	for(i=0;i<10;++i){
		printf("Please Enter The num:");
		scanf("%d",&a);
		for(j=i-1;j>=0&&num[j]>a;--j){
			num[j+1]=num[j];
		}
		num[j+1]=a;
	}
	for(i=0;i<10;++i){
		printf("µÚ%d¸öÊý£º%d",i+1,num[i]); 
	}
}
