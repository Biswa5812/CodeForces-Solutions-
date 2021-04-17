#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int m_c = 100001;
    for(int i=0;i<=m-n;i++)
    {
        m_c = min(m_c,v[i+n-1]-v[i]);
    }
    cout<<m_c;
}