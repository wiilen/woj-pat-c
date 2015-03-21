#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int num[MAX] = {22,3,34,5,16,33,32,3};
void quicksort(int l, int r)
{
	if(l<r){
		int tmp=num[l];
		int i=l,j=r;
		while(i<j){
			while(num[j] > tmp && i < j){
				j--;
			}
			num[i++] = num[j];
			while(num[i] < tmp && i < j){
				i++;
			}
			num[j--] = num[i];
		}
		num[i] = tmp;
		quicksort(l,i-1);
		quicksort(i+1,r);
	}
}

int main()
{
	int k;
	quicksort(0,7);
	for(k=0;k<8;k++){
		printf("%d ",num[k]);
	}
	printf("\n");
	return 0;
}
