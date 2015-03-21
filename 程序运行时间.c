#include<stdio.h>
#define CLK 100

int main(){
  int a,b,c,h,m,s;
  scanf("%d %d",&a,&b);
  c=b-a;
  h=c/CLK/3600;
  m=(c-h*CLK*3600)/CLK/60;
  s=(c-h*CLK*3600-m*CLK*60+50)/100;
  printf("%02d:%02d:%02d",h,m,s);
  return 0;
}
