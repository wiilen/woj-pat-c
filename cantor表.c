/*
����:wiilen
��Ŀ:p1083 Cantor��
*/


#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    i=1;
    while(a>i) a-=i++;
    if(!(i%2!=0)){
        printf("%d/%d",a,i-a+1);
    }
    else printf("%d/%d",i-a+1,a);
    return 0;
}

