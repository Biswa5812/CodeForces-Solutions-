#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                if(f==0)
                {
                    if(j==m-1)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                } 
                else
                {
                    if(j==0)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                } 
            }
        }
        if(i%2!=0)
        {
            if(f==0)
                f=1;
            else
                f=0;
        }
        cout<<endl;
    }
}