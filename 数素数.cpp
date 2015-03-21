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
  int m,n,t=0,k=0,j=0,i=2,condi=1;
  cin>>m>>n;
  while(condi){
  	if(isprime(i)){
  		t++;
  		if(t>=m&&t<n){
  			k++;
  			if(k%10==0){
              cout<<i<<endl;
            }
            else{
              cout<<i<<' ';
            }
  		}
  		if(t==n){
  			cout<<i<<endl;
  			condi=0;
  		}
  	}
    i++;
  }
  return 0;
}
  
