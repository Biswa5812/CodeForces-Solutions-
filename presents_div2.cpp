#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        m[a] = i;
    }
    sort(v.begin(),v.end());
    for(auto x:m)
    {
        cout<<x.second+1<<" ";
    }
}