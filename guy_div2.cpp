#include<bits/stdc++.h>
using namespace std;
int main()
{
// 4
// 3 1 2 3
// 2 2 4

    int n,a,p=1,q=1;
    set<int> s;
    cin>>n;
    for(int i=0;i<p+1;i++)
    {
        if(i==0)
        {
            cin>>a;
            p = a;
        }
        else
        {
            cin>>a;
            s.insert(a);
        }
    }
    for(int i=0;i<q+1;i++)
    {
        if(i==0)
        {
            cin>>a;
            q = a;
        }
        else
        {
            cin>>a;
            s.insert(a);
        }
    }
    if(s.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}