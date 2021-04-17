#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int c;
    for(long long int i=n;i>0;i--)
    {
        c = 0;
        if(n%i==0)
        {
            string test = to_string(i);
            for(int i=0;i<test.length();i++)
            {
                if(test[i]=='4' || test[i]=='7')
                {
                    c++;
                }
            }
            if(c==test.length())
            {
                cout<<"YES";
                c=-1;
                break;
            }
        }
    }
    if(c!=-1)   
    {
        cout<<"NO";
    }
}