#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,n,x,y;
    cin>>s>>n;
    vector<pair<long long int,long long int>> m;
    for(long long int i=0;i<n;i++)
    {
        cin>>x>>y;
        m.push_back(make_pair(x,y));
    }
    sort(m.begin(),m.end());
    for(long long int i=0;i<n;i++)
    {
        if(s<=m[i].first)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            s+=m[i].second;
        }
    }
    cout<<"YES";
}