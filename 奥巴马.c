#include<stdio.h>
#include<string.h>

int main(){
  int n,i,j;
  char c;
  scanf("%d %c",&n,&c);
  for(i=0;i<n;++i){
    printf("%c",c);
  }
  printf("\n");
  for(i=0;i<(n-3)/2;++i){
    printf("%c",c);
    for(j=0;j<n-2;++j){
      printf(" ");
    }
    printf("%c\n",c);
  }
  for(i=0;i<n;++i){
    printf("%c",c);
  }
  printf("\n");
  return 0;
}
