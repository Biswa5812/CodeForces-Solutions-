#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin>>n>>k;
    string s;
   for(int i=0;i<n;i++)
    {
        int l = 0;
        cin>>s;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                l++;
            }
        }
        if (l<=k)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}