
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int b[100],m,k,i,j,s=0,l;
    scanf("%s %d",a,&m);
    l=strlen(a)-1;
    for(i=0;i<=l;++i){
    	if(a[i]>='A') b[l-i]=a[i]-'A'+10;
    	else b[l-i]=a[i]-'0';
    }
    k=1;
    for(j=0;j<=l;++j){
        s+=k*b[j];
        k*=m;
    }
    printf("%d",s);
    return 0;
}
