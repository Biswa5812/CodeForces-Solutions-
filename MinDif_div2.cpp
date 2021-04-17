#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int m = INT_MAX;
    for(int i = 1;i<n-1;i++)
    {
        int m_ax = INT_MIN;
        for(int j = 1;j<n;)
        {
            if(j!=i)
            {
                int t = v[j] - v[j-1];
                m_ax = max(m_ax,t);
                j++;
            }
            else if(j==i)
            {
                int tr = v[j+1] - v[j-1];
                m_ax = max(m_ax,tr);
                j+=2;
            }
        }
        m = min(m,m_ax);
    }
    cout<<m;
}