#include<stdio.h>
#include<string.h>

int check(int z,char m){
	switch(z){
		case 0: return m == '1';  
  		case 1: return m == '0';  
  		case 2: return m == 'X';  
  		case 3: return m == '9';  
    	case 4: return m == '8';  
    	case 5: return m == '7';  
    	case 6: return m == '6';  
    	case 7: return m == '5';  
    	case 8: return m == '4';  
    	case 9: return m == '3';  
    	case 10: return m == '2'; 
	}
}

int main(){
	
	int num[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int cnt=0;
	
	char a[100][100];
	int n,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;++i){
		sum=0;
		for(j=0;j<17;++j){
			if(a[i][j]>='0'&&a[i][j]<='9'){
				sum+=(a[i][j]-'0')*num[j];
			}
			else{
				printf("%s\n",a[i]);
				sum=-1;
				cnt++;
				break;
			}
		}
		if(sum>=0){
			sum%=11;
			if(!check(sum,a[i][17])){
				cnt++;
				printf("%s\n",a[i]);
			}
		}
	}
	if(cnt==0) printf("All passed");
	return 0;
}
