#include<iostream>
#include<string>
using namespace std;

int main(){
	string c;
	int a[10]={0},count=0;
	cout<<"请输入字符串：";
	cin>>c;
	if(!((c[0]>='a'&&c[0]<='z')||(c[0]<'A'&&c[0]<='Z'))){
		cout<<c<<"不是合法字符串";
		return 0;
	}
	if(c.length()<10){
		cout<<c<<"不是合法字符串";
		return 0;
	}
	for(int i=0;i<c.length();++i){
		if(c[i]=='='||c[i]=='*'){
			cout<<c<<"不是合法字符串";
			return 0;
		}
		if(c[i]>='0'&&c[i]<='9'){
			a[c[i]-48]++;
		}
	}
	for(int i=0;i<10;++i){
		if(a[i]!=0) count++;
		if(a[i]>1){
			cout<<c<<"不是合法字符串";
			return 0;
		}
	}
	if(count<2||count>6){
		cout<<c<<"不是合法字符串";
		return 0;
	}
	cout<<c<<"是合法字符串";
	return 0;
}
