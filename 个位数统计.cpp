#include<iostream>
#include<string>
using namespace std;

int main(){
  string a;
  int b[10]={0};
  cin>>a;
  for(int i=0;i<a.length();++i){
    b[a[i]-48]++;
  }
  for(int i=0;i<10;++i){
    if(b[i]!=0){
      cout<<i<<":"<<b[i]<<endl; 
    } 
  }
  return 0;
}
