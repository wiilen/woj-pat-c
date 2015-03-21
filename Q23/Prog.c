//二、编程题
/*
（3）程序利用函数primecount()求一组数中的质数个数，请编写primecount()函数。
*/
#include "stdio.h"
#include "math.h"
#include "test.h"

int primecount(int x[],int n)
{
	int i,j,c,s=0;
	for(i=0;i<n;++i){
		c=0;
		for(j=2;j<x[i];++j){
			if(x[i]%j==0){
				c++;
				break;
			}
		}
		if (c==0) s++;
	}
	return s;


}

void main()
{
	int a[10]={133,141,44,17,22,16,109,9,27,61};
	int count;

	count = primecount(a,10);
	printf("Prime Count =%d\n",count);

	test(a,10);
}
