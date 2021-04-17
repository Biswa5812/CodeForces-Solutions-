#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        vector<long long int> v;
        cin>>n>>k;
        if(n==k)
        {
            cout<<0<<endl;
            cout<<" "<<endl;
        }
        else
        {
            int c=0;
            for(int i=1;i<=n;i++)
            {
                if(i>=n/2 && i!=k)
                {
                    v.push_back(i);
                    c++;
                }
            }
            cout<<c<<endl;
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}