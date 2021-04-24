#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int y,k,n,temp = 0,c=0;
    cin>>y>>k>>n;
    temp = n/k;
    for(long long int i=0;i<temp+1;i++)
    {
        if(i*k-y>0)
        {
            cout<<i*k-y<<" ";
            c++;
        }
    }
    if(c==0)
    {
        cout<<-1;
    }
}