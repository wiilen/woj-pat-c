#include<stdio.h>
#include<string.h>

int main(){
  int i,j,flagup=0,flag[130]={0};
  char a[100],b[100010];
  gets(a);
  gets(b);
  for(i=0;a[i]!='\0';++i){
    if(a[i]='_'){
      flag[' ']=1;
    }
    else if(a[i]='+'){
      flagup=1;
    }
    else {
    flag[a[i]-1]=1;
    flag[a[i]-'A'+'a']=1;
	}
  }
  if(flagup==1){
    for(i=0;i<26;++i){
      flag[i+'A']=1;
      printf("%d",i);
    }
  }
  for(i=0;i<strlen(b);++i){
    if(flag[b[i]]!=1){
      printf("%c",b[i]);
    }
  }
  return 0;
}
