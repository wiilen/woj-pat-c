/*
作者:wiilen
题目:p1014 装箱问题
*/


#include <stdio.h>
#include <string.h>
int main()
{
    int f[20001],s[40];
    int v,n,i,j;
    scanf("%d %d",&v,&n);
    memset(f,0,sizeof(f));
    for(i=1;i<=n;++i){
        scanf("%d",&s[i]);
    }
    for(i=1;i<=n;++i){
        for(j=v;j>=s[i];--j){
            f[j]=(f[j]>f[j-s[i]]+s[i])?f[j]:f[j-s[i]]+s[i];
        }
    }
    printf("%d",v-f[v]);
    return 0;
}

