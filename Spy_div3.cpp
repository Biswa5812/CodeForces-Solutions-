#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0;
        cin>>n;
        int t = 0,f = 0;
        int a[n];
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;

        }
        for(auto x:m)
        {
            // cout<<x.first<<" "<<x.second;
            if(x.second == 1)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[j]==x.first)
                    {
                        p = j + 1;
                        break;
                    }
                }
            }
        }
        cout<<p<<endl;
    }
}