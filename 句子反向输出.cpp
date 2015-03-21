#include<iostream>
#include<string>
using namespace std;

int main(){
  int i=0;
  string a[80];
  while(cin>>a[++i]);
  for(int j=i-1;j>=2;--j){
    cout<<a[j]<<' ';
  }
  cout<<a[1];
  return 0;
}

