#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 || n%2!=0)
    {
        cout<<-1;
    }
    else
    {
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        for(int i=0;i<n;)
        {
            swap(v[i],v[i+1]);
            i+=2;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
    }
    
}