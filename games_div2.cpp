#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n],g[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>g[i];
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && h[i]==g[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}