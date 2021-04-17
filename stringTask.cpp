#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string r;
    set<char> v;
    v.insert('A');
    v.insert('O');
    v.insert('Y');
    v.insert('E');
    v.insert('U');
    v.insert('I');
    for(int i=0;i<s.length();i++)
    {
        if(v.find(toupper(s[i]))==v.end())
        {
            r += '.';
            r += tolower(s[i]);
        }
    }
    cout<<r;
}