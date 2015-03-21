#include <stdlib.h>
int primecount(int *,int);
void test(int *a,int n)
{
	FILE *fp;
	int i;

	if((fp = fopen("in.dat","r"))==NULL)
		exit(0);
	for(i=0;i<n;i++)
		fscanf(fp,"%d",a+i);
	fclose(fp);

	fp = fopen("out.dat","w");
	fprintf(fp,"count=%3d ",primecount(a,n));
	fclose(fp);
}