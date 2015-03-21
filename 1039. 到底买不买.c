#include<stdio.h>
#include<string.h>

int main(){
  int i,j,n,lena,lenb,n1,n2;
  char a[100],b[100];
  gets(a);
  gets(b);
  lena=strlen(a);
  lenb=strlen(b);
  for(i=0;i<lenb;++i){
    for(j=0;j<lena;++j){
      if(b[i]==a[j]){
        b[i]='*';
        a[j]='*';
      }
    }
  }
  n1=0;
  n2=0;
  for(i=0;i<lena;++i){
    if(a[i]!='*') n1++;
  }
  for(i=0;i<lenb;++i){
    if(b[i]!='*') n2++;
  }
  if(n2){
    printf("No %d",n2);
    return 0;
  }
  else{
    printf("Yes %d",n1);
    return 0;
  }
}
