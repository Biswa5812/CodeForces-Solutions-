#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int j = -1;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2!=0)
            {
                j++;
                swap(v[i],v[j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}