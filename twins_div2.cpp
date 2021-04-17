#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int a,b=0;
    vector<int> v;
    for(long long int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    a=0;
    int s = accumulate(v.begin(),v.end(),0);
    int c=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(a<=b)
        {
            a += v[i];
            b = s-a;
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c;
}