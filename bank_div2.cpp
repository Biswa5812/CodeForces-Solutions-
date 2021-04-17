#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n>0)
    {
        cout<<n;
    }
    else
    {
        string s = to_string(n);
        string t = s;
        s.erase(s.begin()+(s.size()-2));
        t.erase(t.begin()+(t.size()-1));
        stringstream ans1(s);
        stringstream ans2(t);
        long long int x,y;
        ans1>>x;
        ans2>>y;
        cout<<max(x,y);  
    }
}