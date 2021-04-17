#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s;
    r = "hello";
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==r[j])
        {
            j++;
        }
        if(j==5)
        {
            cout<<"YES";
            break;
        }
    }
    if(j!=5)
    {
        cout<<"NO";
    }
}