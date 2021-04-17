#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,t1,t2;
        cin>>n>>m;
        long long int count = 0;
        for(long long int i=0;i<n;i++)
        {
            cin>>t1;
        }
        for(long long int i=0;i<m;i++)
        {
            cin>>t2;
        }
        if(n==m)
        {
            cout<<n+(m-1)<<endl;
        }
        else if(m>n)
        {
            cout<<(n-1)+n<<endl;
        }
        else
        {
            cout<<2*m<<endl;
        }
    }
    
}