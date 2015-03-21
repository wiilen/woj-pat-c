#include<iostream>
#include<string>
using namespace std;

int main(){
  string a;
  int b,temp=0,first=0;
  cin>>a>>b;
  for(int i=0;i<a.length();++i){
    temp=temp*10+a[i]-48;
    if(temp>=b){
      cout<<temp/b;
      first=1;
    }
    else if(first) cout<<0;
    temp=temp%b;
  }
  if(first==0) cout<<0;
  cout<<" "<<temp<<endl;
  return 0;
}
