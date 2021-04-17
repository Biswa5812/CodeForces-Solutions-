#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m=0,v=0;
    m = max((3*a)/10, a - (a/250) * c);
    v = max((3*b)/10, b - (b/250) * d);
    if(m>v)
    {
        cout<<"Misha";
    }
    else if(v>m)
    {
        cout<<"Vasya";
    }
    else
    {
        cout<<"Tie";
    }
}