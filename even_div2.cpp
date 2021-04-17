#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,b,a,j=0;
    vector<long long int> v(n,0);
    cin>>n>>k;
    j = n%2==0?n/2:(n+1)/2;
    if(k<=j)
    {
        cout<<k*2-1;
    }
    else
    {
        cout<<(k-j)*2;   
    }

}