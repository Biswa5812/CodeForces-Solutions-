#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                count++;

            }
            else if(s[i]=='B')
            {
                if(count==0)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
            else if(s[i]=='C')
            {
                count++;
            }
            // cout<<count<<endl;
        }
        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // map<char,int> m;
        // for(int i=0;i<s.length();i++)
        // {
        //     m[s[i]]++;
        // }
        // if(m.size()==3)
        // {
        //     int c=0;
        //     for(auto x:m)
        //     {
        //         if(c==0)
        //         {
        //             c+=x.second;
        //         }
        //         else{
        //             c-=x.second;
        //         }
        //     }
        //     if(c==0)
        //     {
        //         cout<<"YES"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else if(m.size()==2)
        // {
        //     if(m[0]-m[1]==0)
        //     {
        //         cout<<"YES"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
    }
}