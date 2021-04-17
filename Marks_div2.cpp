#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int c = 0;
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<m;j++)
        {
            int f = 0;
            for(int k=0;k<n;k++)
            {
                if(a[k][j]>a[i][j])
                {
                    f = 1;
                }
            }
            if(f==0)
            {
                count++;
            }
        }
        if(count>0)
        {
            c++;
        }
    }
    cout<<c;
}