#include <stdio.h>  

  
int main()  
{  
    int shuzu[1010],sum[1010];  
    int n,max,i,j;  
    while (scanf("%d",&n)!=EOF)  
    {  
        for(i=0;i<n;++i){
        	scanf("%d",&shuzu[i]);
        }
        sum[0]=shuzu[0];
        for(i=0;i<n;++i){
        	max=0;
        	for(j=0;j<i;++j){
        		if(shuzu[i]>shuzu[j]){
        			if(max<sum[j]) max=sum[j];
        		}
        	}
        	sum[i]=max+shuzu[i];
        }
        int ans=0;
        for(i=0;i<n;++i){
        	if(ans<sum[i]) ans=sum[i];
        }
        printf("%d",ans);
    }  
    return 0;  
}  
