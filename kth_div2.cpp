#include<bits/stdc++.h>
using namespace std;
int main()
{
    // check count of 1 >= quety value => 1 else 0
    long long n,q,t,b,s,count=0;
    cin>>n>>q;
    vector<long long int> a;
    vector<long long int> c;
    for(long long int i=0;i<n;i++)
    {
        cin>>s;
        if(s==1)
        {
            count++;
        }
        a.push_back(s); 
        // count no of 1s
    }
    for(long long int j=0;j<q;j++)
    {
        cin>>t>>b;
        if(t==1)
        {
            a[b-1] = 1 - a[b-1];
            if(a[b-1]==0)
            {
                count--;
            }
            else{
                count++;
            }
        }
        else
        {
           if(count>=b)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<0<<endl;
           }
        }
    }
}