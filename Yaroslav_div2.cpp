#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    if(n==1)
    {
        cin>>a;
        cout<<"YES";
        return 0;
    }
    else
    {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int m = 1;
        int count = 1;
        for(int i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
            {
                count++;
                if(count>m)
                {
                    m = count;
                }
            }
            else
            {
                count = 1;
            }
        }
        string s = m<=(n+1)/2?"YES":"NO";
        cout<<s;
    }
}