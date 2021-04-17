#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int i,j;
    for(i=0,j=0;i<s1.length() && j<s2.length();j++)
    {
        if(s1[i]==s2[j])
        {
            i+=1;
        }
    }
    cout<<i+1; 
}