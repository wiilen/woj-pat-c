#include<iostream>
using namespace std;

int isprime(int num){
  if(num==2) return 1;
  for(int j=2;j*j<=num;++j){
    if(num%j==0) return 0;
  }
  return 1;
}

int main(){
  int m,n,count=1,a[500],j=0;
  cin>>m>>n;
  for(int i=2;i*i<=10000000;++i){
      if(isprime(i)){
      	a[++j]=i;
    }
  }
  for(int k=m;k<n;++k){
      if(count%10==0){
        cout<<a[k]<<endl;
        count++;
      }
      else{
        cout<<a[k]<<' ';
        count++;
      }
  }
  cout<<a[n]<<endl;
  return 0;
}
  
