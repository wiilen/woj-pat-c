#include<stdio.h>

int main(){
	int i;
	for(i=1;;i++){
		if((i%2==1)&&(i%3==2)&&(i%5==4)&&(i%6==5)&&(i%7==0)) break;
	}
	printf("%d",i);
	return 0;
}
