#include<iostream>
using namespace std;

int isPrime(int num){
	for(int j=2;j*j<num;++j){
		if(num%j==0)
			return 0;
	}
	return 1;
}

int main(){
	int c=0,n,x,y;
	cin>>n;
	x=2;
	y=3;
	for (int i=4;i<n;++i){
		if(isPrime(i)){
			x=y;
			y=i;
			if(y-x==2) c++;
		}
	}
	cout<<c;
	return 0;
}
