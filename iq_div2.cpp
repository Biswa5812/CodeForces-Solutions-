#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    int co=0,ce=0,lo,le;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2!=0)
        {
            co++;
            lo = i;
        }
        else
        {
            ce++;
            le = i;
        }
    }
    if(co==1)
    {
        cout<<lo<<endl;
    }
    else
    {
        cout<<le<<endl;
    }
}