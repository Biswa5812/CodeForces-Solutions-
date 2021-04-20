#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,count = 0,cc = 0;
    string e,f,g;
    cin>>a;
    cin>>b;
    c = a + b;
    string s1 = to_string(a);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!='0')
        {
            // count+=s1[i]-48;
            e+=s1[i];
        }   
    }
    s1 = to_string(b);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!='0')
        {
            // count+=s1[i]-48;
            f+=s1[i];
        }
    }
    s1 = to_string(c);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!='0')
        {
            // cc+=s1[i]-48;
            g+=s1[i];
        }
    }
    count = stoi(e) + stoi(f);
    cc = stoi(g);
    if(count==cc)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}