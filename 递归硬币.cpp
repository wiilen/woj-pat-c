#include<iostream>
using namespace std;

int splitc(int v,int t){
	int c[3]={5,2,1};
	if(v<0) return 0;
	if(v==0) return 1;
	if(t<0) return 0;
	return splitc(v,t-1)+splitc(v-c[t],t);
}

int main(){
	cout<<splitc(100,2);
}
