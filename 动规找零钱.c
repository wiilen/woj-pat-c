#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
    const int a[] = {1, 2, 5, 10, 20, 50, 100};
    int f[101][256] = {1};//f[m][n]�ĺ���Ϊ��m�ų�Ʊ���ɵĽ��Ϊn��������� 
    int i, j, k, min, max;

    for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)//��Ʊ��ֵ 
    {
        for(j = 1; j <= 100; j++)//��Ʊ���� 
        {
            min = (j > a[i]) ? j : a[i]; //Ϊ������Ч���㣬��kֵ�涨һ�����޺����� 
            max = (n <= j * a[i]) ? n : j * a[i];
            for(k = min; k <= max; k++)//������� 
            {
                f[j][k] += f[j - 1][k - a[i]];//������к���һ����ֵΪa[i]�ĳ�Ʊ
            }
        }    
    }
    
    for(k = 0, i = 1; i <= 100; k += f[i++][n]);
    printf("%d",k);
    return 0;
}
