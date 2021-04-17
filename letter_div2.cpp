#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  {a, b, c} [^\n]
    string s;    
    getline(cin,s);
    set<char> cs;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=',' && s[i]!=' ' && s[i]!='{' && s[i]!='}')
        {
            cs.insert(s[i]);
        }
    }
    cout<<cs.size();
}