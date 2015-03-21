#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int i,l,j,k;
    int flag = 0;
    string s;
    getline(cin,s);
    s = ' '+s;
    l = s.length();
    j = l-1;
    for(i=l-1;i>=0;i--)
    {
        if(s[i] == ' ')
        {
            if(flag==1)
                cout<<' ';
            else
                flag = 1;
            for(k=i+1;k<=j;k++)
                cout<<s[k];
            j = i-1;
        }      
    }
    return 0;
}

