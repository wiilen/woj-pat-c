#include<stdio.h>
#include<string.h>

int main(){
  int i,numT,numAT,numPAT;
  numT=0;
  numAT=0;
  numPAT=0;
  char a[100010];
  scanf("%s",a);
  for(i=strlen(a)-1;i>=0;--i){
    if(a[i]=='T') numT++;
    else if(a[i]=='A') numAT=(numAT+numT)%1000000007;
    else if(a[i]=='P') numPAT=(numPAT+numAT)%1000000007;
  }
  printf("%d",numPAT);
  return 0;
}
