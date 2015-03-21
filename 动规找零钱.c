#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
    const int a[] = {1, 2, 5, 10, 20, 50, 100};
    int f[101][256] = {1};//f[m][n]的含义为用m张钞票构成的金额为n的组合数量 
    int i, j, k, min, max;

    for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)//钞票面值 
    {
        for(j = 1; j <= 100; j++)//钞票张数 
        {
            min = (j > a[i]) ? j : a[i]; //为避免无效运算，给k值规定一个上限和下限 
            max = (n <= j * a[i]) ? n : j * a[i];
            for(k = min; k <= max; k++)//金额总数 
            {
                f[j][k] += f[j - 1][k - a[i]];//该组合中含有一张面值为a[i]的钞票
            }
        }    
    }
    
    for(k = 0, i = 1; i <= 100; k += f[i++][n]);
    printf("%d",k);
    return 0;
}
