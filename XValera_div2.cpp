#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    set<char> s;
    set<char> t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ch;
            if(i==j)
            {
                s.insert(ch);
            }
            else if(i==n-j-1)
            {
                s.insert(ch);
            }
            else
            {
                t.insert(ch);
            }
        }
    }
    if(s.size()==1 && t.size()==1)
    {
        auto it = s.begin();
        auto i = t.begin();
        if(*it==*i)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    else
    {
        cout<<"NO";
    }
}