#include<stdio.h>
#include<string.h>

int main(){
  int temp,i,n,a[101],k,score[100010];
  scanf("%d",&n);
  memset(a,0,sizeof(a));
  for(i=0;i<n;++i){
    scanf("%d",&temp);
    a[temp]++;
  }
  scanf("%d",&k);
  for(i=0;i<k;++i){
    scanf("%d",&score[i]);
  }
  for(i=0;i<k-1;++i){
    printf("%d ",a[score[i]]);
  }
  printf("%d",a[score[k-1]]);
  return 0;
}
