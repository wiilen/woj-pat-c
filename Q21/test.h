#include <stdlib.h>
double average(double *,int);
void test(double *a,int n)
{
	FILE *fp;
	int i;

	if((fp = fopen("in.dat","r"))==NULL)
		exit(0);
	for(i=0;i<n;i++)
		fscanf(fp,"%lf",a+i);
	fclose(fp);

	fp = fopen("out.dat","w");
	fprintf(fp,"%5.2lf ",average(a,n));
	fclose(fp);
}