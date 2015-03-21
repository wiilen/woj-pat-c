#include<stdio.h>
#include<string.h>

int main(){
  int a,b,c,e,f,g,s1,s2,s3;
  scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&e,&f,&g);
  s3=g-c;
  s2=f-b;
  s1=e-a;
  if(s3<0){
  	s2--;
  	s3+=29;
  }
  if(s2<0){
  	s1--;
  	s2+=17;
  }
  if(s1<0){
  	s3=c-g;
  	s2=b-f;
  	s1=a-e;
  	if(s3<0){
  	  s2--;
      s3+=29;
    }
    if(s2<0){
      s1--;
      s2+=17;
    }
    s1=-s1;
  }
  printf("%d.%d.%d",s1,s2,s3);
  return 0;
}
