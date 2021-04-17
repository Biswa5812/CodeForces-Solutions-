#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,f,t,c;
    cin>>n>>k;
    long long int m = INT_MIN;
    // vector<pair<long long int,long long int>> vec;
    for(long long int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(t<=k)
        {
            c = f;
        }
        else
        {
            c = f - (t - k);
        }
        if(m<c)
        {
            m=c;
        }
    }
    cout<<m;  
}