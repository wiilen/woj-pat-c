/*
作者:wiilen
题目:p1576 最长严格上升子序列
*/


#include <stdio.h>
#include <string.h>

int max(int c,int d){
    if (c>d) return c;
    else return d;
}

int main()
{
    int i,j,n,a[5010],b[5010],maxn;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
    maxn=-1;
    memset(b,0,sizeof(b));
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            if(a[i]>a[j]){
                b[i]=max(b[i],b[j]+1);
                maxn=maxn>b[i]?maxn:b[i];
            }
        }
    }
    printf("%d",maxn);
    return 0;
}

