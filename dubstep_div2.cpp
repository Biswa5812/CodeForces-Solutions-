#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s;
    for(int i=0;i<s.length();)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=3;
        }
        else
        {
            if(i<3)
            {
                r += s[i];
                i++;
            }
            else
            {
                if(s[i-3]=='W'&&s[i-2]=='U'&&s[i-1]=='B')
                {
                    r += ' ';
                }
                r += s[i];
                i++;
            }
        }
    }
    if(r[0]==' ')
    {
        for(int i=1;i<r.length();i++)
        {
            cout<<r[i];
        }
    }
    else
    {
        cout<<r;
    }
}