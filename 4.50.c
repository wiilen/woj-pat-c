#include<stdio.h>

int main(){
	int i,j,k;
	printf("Red ball white ball black ball:\n");
	printf("-------------------------------\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;++j){
			if(8-i-j<=6){
				printf("%d %d %d\n",i,j,8-i-j);
			}
		}
	}
	return 0;
}
