#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        cin>>s;
        string c;
        if(s.length()>10)
        {
            int cal = s.length()-2;
            c = s[0];
            c += to_string(cal);
            c += s[s.length()-1];
            // c = c + (char)(s.length()-2);
            // c = c + s[s.length()-1];
            cout<<c<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}