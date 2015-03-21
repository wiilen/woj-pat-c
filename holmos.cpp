#include<iostream>
#include<string>
using namespace std;

int main(){
  string a,b,c,d,day;
  int minlen1,minlen2,hh,mm,k;
  string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
  cin>>a>>b>>c>>d;
  if(a.length()>b.length()) 
    minlen1=b.length();
  else minlen1=a.length();
  if(c.length()>d.length())
    minlen2=d.length();
  else minlen2=c.length();
  for(int i=0;i<minlen1;++i){
    if(a[i]==b[i]&&a[i]>='A'&&a[i]<='G'){ 
      day=week[a[i]-'A'];
      k=i;
      break;
	}
  }
  for(int j=k+1;j<minlen1;++j){
    if(a[j]==b[j]&&((a[j]>='0'&&a[j]<='9')||(a[j]>='A'&&a[j]<='N'))){ 
      if(a[j]-'0'<=9)
        hh=a[j]-'0';
      else hh=a[j]-'A'+10;
      break;
    }
  }
  for(int i=0;i<minlen2;++i){
    if(c[i]==d[i]&&((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))) {
      mm=i;
      break;
	}
  }
  if(hh<10 && mm>=10) cout<<day<<' '<<'0'<<hh<<':'<<mm;
  if(hh>=10 && mm<10) cout<<day<<' '<<hh<<':'<<'0'<<mm;
  if(hh>=10 && mm>=10) cout<<day<<' '<<hh<<':'<<mm;
  if(hh<10 && mm<10) cout<<day<<' '<<'0'<<hh<<':'<<'0'<<mm;
}
