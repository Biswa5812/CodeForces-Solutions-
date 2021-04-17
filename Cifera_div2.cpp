#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,l;
    cin>>k;
    cin>>l;
    long long int count = 0;
    int f = 0;
    while(l%k==0)
    {
        l = l/k;
        count++;
    }
    if(l==1 && count>=0)
    {
        cout<<"YES"<<endl;
        cout<<count-1<<endl;
    }
    else
    {
        cout<<"NO";
    }
}