#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int> v;
    vector<int> k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        cin>>a;
        k.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(k.begin(),k.end());
    int t = 2*v[0];
    t = max(t,v[n-1]);
    if(k[0]<=t)
    {
        cout<<-1;
    }
    else
    {
        cout<<t;
    }

}