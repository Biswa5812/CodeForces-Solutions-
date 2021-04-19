#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,t;
    cin>>a;
    long long int b = 1;
    while(b)
    {
        t = a + b;
        string s = to_string(t);
        if(s.find('8')!=string::npos)
        {
            break;
        }
        else
        {
            b++;
        }
    }
    cout<<b;
}