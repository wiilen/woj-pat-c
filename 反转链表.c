#include<stdio.h>

int main(){
  int data[100010],next[100010],list[100010],final[100010];
  int start_num,n,re,i,temp,l;
  scanf("%d %d %d",&start_num,&n,&re);
  for(i=0;i<n;++i){
    scanf("%d",&temp);
    scanf("%d %d",&data[temp],&next[temp]);
  }
  l=0;
  while(start_num!=-1){
    list[l]=start_num;
    l++;
    start_num=next[start_num];
  }
  for(i=0;i<l;++i){
    final[i]=list[i];
  }
  for(i=0;i<(l-l%re);++i){
    final[i]=list[(i/re)*re+re-i%re-1];
  }
  for(i=0;i<l-1;++i){
    printf("%05d %d %05d\n",final[i],data[final[i]],final[i+1]);
  }
  printf("%05d %d %d",final[l-1],data[final[l-1]],-1);
  return 0;
}
