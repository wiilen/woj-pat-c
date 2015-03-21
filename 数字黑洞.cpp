#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int judge(int num){
  int a[4]={0},c=0,d=0;
  for(int i=3;i>=0;--i){
    if(num){
      a[i]=num%10;
      num=num/10;
    }
  }
  sort(a,a+4);
  for(int i=0;i<4;++i){
    c=c*10+a[i];
  }
  for(int i=3;i>=0;--i){
    d=d*10+a[i];
  }
  if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){
    cout<<d<<" - "<<c<<" = "<<"0000"<<endl;
    return 0;
  }
  else printf("%04d - %04d = %04d\n",d,c,d-c);
  return d-c;
}

int main(){
  int n,k;
  cin>>n;
  n=judge(n);
  while(n!=0&&n!=6174) {
    n=judge(n);
  }
  return 0;
}
