#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    int r = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        r = __gcd(r,a);
    }
    cout<<n*r;

}

/*
    each time we are selecting xi > xj and performing xi = xi - xj
    same as recursively calling gcd(a,b-a) till minimum value
*/