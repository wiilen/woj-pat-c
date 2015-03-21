/*
作者:wiilen
题目:p1014 装箱问题
*/


#include <stdio.h>
#include <string.h>
int main()
{
    int total_v,i,j,n,v[40],f[50010];
    scanf("%d %d",&total_v,&n);
    for(i=1;i<=n;++i){
        scanf("%d",&v[i]);
    }
    memset(f,0,sizeof(f));
    for(i=1;i<=n;++i){
        for(j=total_v;j>=v[i];j--){
            f[j]=f[j]>(f[j-v[i]]+v[i])?f[j]:(f[j-v[i]]+v[i]);
        }
    }
    printf("%d",total_v-f[total_v]);
}

