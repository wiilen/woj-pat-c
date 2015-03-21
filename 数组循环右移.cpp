#include<iostream>
using namespace std;

int main(){
  int a[101],n,m,flag=0;
  cin>>n>>m;
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  m=n-m%n;
  for(int i=m;i<n;++i)
    if(flag) cout<<' '<<a[i];
    else{
      cout<<a[i];
      flag=1;
    }
  for(int i=0;i<m;++i){
    if(flag) cout<<' '<<a[i];
    else{
      cout<<a[i];
      flag=1;
    }
  }
  return 0;
}
