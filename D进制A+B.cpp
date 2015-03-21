#include<iostream>
using namespace std;

int main(){
  int a,b,c,i=0;
  int s[100]={0};
  cin>>a>>b>>c;
  a=a+b;
  while(a!=0){
    s[i++]=a%c;
    a=a/c;
  }
  for(int j=i-1;j>=0;--j){
    cout<<s[j];
  }
  return 0;
}
