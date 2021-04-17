#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string r;
    vector<int> v;
    cin>>s;
    if(s.length()>1)
    {
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                v.push_back((int)s[i]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            r += v[i];
            r += '+';
        }
        r += v[v.size()-1];
        cout<<r;
    }
    else{
        cout<<s;
    }
    
}