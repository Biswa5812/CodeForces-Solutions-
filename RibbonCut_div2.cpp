#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int t = n,k=n;
    int count = 0,m;
    m = min({a,b,c});
    while(n!=0)
    {
        if(t==n)
        {
            count++;
            t = -1;
            n-=m;
        }
        else 
        {
            if(n==a || n==b || n==c)
            {
                count++;
                if(n==a) n-=a;
                if(n==b) n-=b;
                if(n==c) n-=c;
            }
            else if(n%a==0)
            {
                count++;
                n-=a;
            }
            else if(n%b==0)
            {
                count++;
                n-=b;
            }
            else if(n%c==0)
            {
                count++;
                n-=c;
            }
        }
    }
    if(m==1 && k!=1)
    {
        cout<<count+2;
    }
    else
        cout<<count;
}