#include<iostream>
using namespace std;

int main(){
  int n;
  double a[20],b[20],c[20];
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i]>>b[i]>>c[i];
  }
  for(int i=1;i<=n;++i){
    if(a[i]+b[i]>c[i]) cout<<"Case #"<<i<<": true"<<endl;
    else cout<<"Case #"<<i<<": false"<<endl;
  }
  return 0;
} 
