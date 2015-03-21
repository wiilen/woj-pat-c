#include<stdio.h>
#include<string.h>

int main(){
  int i,j,flagup,flag[256];
  char a[100],b[100010];
  memset(flag,0,sizeof(flag));
  gets(a);
  gets(b);
  flagup=0;
  for(i=0;a[i]!='\0';++i){
  	if(a[i]=='+') flagup=1;
   	flag[a[i]]=1;
    flag[a[i]-'A'+'a']=1;
  }
  if(flagup==1){
    for(i='A';i<='Z';++i){
      flag[i]=1;
    }
  }
  for(i=0;b[i]!='\0';++i){
    if(flag[b[i]]==0){
      printf("%c",b[i]);
    }
  }
  return 0;
}
