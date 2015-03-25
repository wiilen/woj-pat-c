#include<stdio.h>
#include<string.h>

int main(){
	int i,j,lena,lenb,k,p;
	char a[100],b[100],c[100],d[100],temp;
	scanf("%s%s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	for(i=strlen(a),j=0;i<strlen(a)+strlen(b);++i,++j){
		a[i]=b[j];
	}
	a[lena+lenb]='\0';
	k=0;
	printf("ÆæÊýÎ»ÖÃ×Ö·û£º") ;
	for(i=0;i<lena+lenb;i+=2){
		printf("%c",a[i]);
		c[k++]=a[i];
	}
	printf(" ");
	p=0;
	printf("Å¼ÊýÎ»ÖÃ×Ö·û£º");
	for(i=1;i<lena+lenb;i+=2){
		printf("%c",a[i]);
		d[p++]=a[i];
	}
	printf("\n");
	for(i=0;i<k;++i){
		for(j=i;j<k;++j){
			if(c[i]>c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<p;++i){
		for(j=i;j<p;++j){
			if(d[i]>d[j]){
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(i=0;i<k;++i){
		printf("%c",c[i]);
	}
	printf(" ");
	for(i=0;i<p;++i){
		printf("%c",d[i]);
	}
	printf("\n");
	printf("%s",a);
	return 0;
}
