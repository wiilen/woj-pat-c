/*
作者:wiilen
题目:p1007 级数求和
*/


#include <stdio.h>
int main()
{
    double k,i,s;
    int c;
    i=1;
    s=0;
    scanf("%lf",&k);
    while(s<k){
        s+=1/i;
        i++;
    }
    c=(int)i;
    printf("%d",c-1);
    return 0;
}

