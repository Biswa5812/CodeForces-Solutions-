#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int ma = 0,im;
    int mi = INT_MAX,imi;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>ma)
        {
            ma = v[i];
            im = i;
        }
        if(v[i]<=mi)
        {
            mi = v[i];
            imi = i;
        }
    }
    if(im>imi)
    {
        imi += 1;
    }
    cout<<im + ((n-1)-imi);
}