#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
  string a,b;
  char da,db; 
  int nda,ndb;
  int count1=0,count2=0,total1=0,total2=0;
  cin>>a>>da>>b>>db;
  for(int i=0;i<a.length();++i){
    if(a[i]==da) count1++;
  }
  for(int i=0;i<b.length();++i){
    if(b[i]==db) count2++;
  }
  nda=da-'0';
  ndb=db-'0';
  for(int j=0;j<count1;++j){
    total1+=nda*pow(10,j);
  }
  for(int j=0;j<count2;++j){
    total2+=ndb*pow(10,j);
  }
  cout<<total1+total2;
}
