#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    int t1[n],t2[n];
    for(int i=0;i<n;i++)
    {
        cin>>t1[i]>>t2[i];
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int r=0,l=0,lo=0,up=0;
        x = t1[i];
        y = t2[i];
        for(int j=0;j<n;j++)
        {
            if(t2[j]==y)
            {
                if(t1[j]>x)
                {
                    r++;
                }
                if(t1[j]<x)
                {
                    l++;
                }
            }
            if(t1[j]==x)
            {
                if(t2[j]<y)
                {
                    lo++;
                }
                if(t2[j]>y)
                {
                    up++;
                }
            }
        }
        if(r>=1 && l>=1 && lo>=1 && up>=1)
        {
            count++;
        }
    }
    cout<<count;
}