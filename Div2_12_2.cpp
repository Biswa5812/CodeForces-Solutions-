#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int count = 0;
        if(a!=1 && b==1)
        {
            b=b+1;
            // count = count + 1;
        }
        if(a>b)
        {
            while(a>b)
            {
                a = a/b;
                count = count + 1;
            }
            // cout<<count<<" "<<a<<endl;
            if(count>a)
            {
                cout<<count<<endl;
            }
            else if(a==b)
            {
                b = b + 1;
                count = count + 1;
                cout<<count+1<<endl;
            }
            else{
                cout<<count+1<<endl;
            }
        }
        else if(a==b)
        {
            cout<<count+2<<endl;
        }
        else{
            cout<<count+1<<endl;
        }
    }
}