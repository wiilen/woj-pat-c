//二、编程题
/*
（1）利用函数average()求一组数去掉一个最大数和去掉一个最小数后的平均数，
请编写average()函数。
*/
#include "stdio.h"
#include "test.h"
#define N 10
double average(double x[],int n)
{
	double min=99999,max=0,sum=0,newn=n-2;
	int i;
	for(i=0;i<n;++i){
		if(x[i]>max){
			max=x[i];
		}
		if(x[i]<min){
			min=x[i];
		}
	}
	int count1=0,count2=0;
	for(i=0;i<n;++i){
		if(x[i]==max&&count1==0) {
			count1++;
			continue;
		}
		else if(x[i]==min&&count2==0) {
			count2++;
			continue;
		}
		else{
			sum+=x[i];
		}
	}
	return sum/newn;
}

void main()
{
	double a[N]={2,14.5,44.7,1,22.2,16,10.6,9,28.3,6};
	double aver;
	
	aver = average(a,N);
	printf("average = %lf  ",aver);


	test(a,10);
}

