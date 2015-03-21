#include<stdio.h>
#include<string.h>

int main(){
	int i,f,b,c;
	char a;
	i=0;
	f=0;
	b=0;
	c=0;
	do{
		scanf("%c",&a);
		if((a>='0')&&(a<='9')){
			f++;
		}
		else if((a=='+')||(a=='-')||(a=='*')||(a=='/')||(a=='%')||(a=='=')){
			b++; 
		}
		else c++;
	}while(a!='\\');
	printf("%d %d %d",f,b,c);
	return 0;
}
