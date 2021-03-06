#include <iostream>
#include<cstdio>
#include <algorithm>  

using namespace std;

struct mooncake
{
    double size,total,price;
    bool operator < (const mooncake& a) const {  
        return price > a.price;  
    } 
};

int main()
{
    int n,i;
    double m,money=0;
    mooncake A[1010];
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>A[i].size;
    for(i=0;i<n;i++)
    {
        cin>>A[i].total;
        A[i].price = A[i].total/A[i].size;
    }
    sort(A,A+n);
    i=0;
    while((m>0)&&(i<n))
    {
        if(m>=A[i].size)
        {
            m -= A[i].size;
            money += A[i].total;
            i++;
        }
        else
        {
            money += m*A[i].price;
            m=0;
        }
    }
    printf("%.2lf",money);
    return 0;
}
