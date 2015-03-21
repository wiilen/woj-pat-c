#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(){
  char a[10050];
  int i,n,e,t;
  scanf("%s",a);
  if(a[0]=='-') printf("-");
  n=strlen(a)-1;
  e=0;
  t=1;
  while((a[n]!='-')&&(a[n]!='+')){
    e+=t*(a[n]-48);
    t*=10;
    n--;
  }
  if(a[n]=='-'){
    e*=-1;
  }
  t=0;
  if(e==0){
    for(i=1;i<n-1;++i){
      printf("%c",a[i]);
    }
  }
  else if(e<0){
    e*=-1;
    printf("0.");
    for(i=1;i<e;++i){
      printf("0");
    }
    for(i=1;i<n-1;++i){
      if(a[i]!='.')
        printf("%c",a[i]);
    }
  }
  else{
    for(i=1;i<n-1;++i){
      if(a[i]!='.'){
      	printf("%c",a[i]);
        t++;
      }
    }
    if((t-1==e)&&(t!=n-3)) printf(".");
    while(t<=e){
      printf("0");
      t++;
    }
  }
  return 0;
}
