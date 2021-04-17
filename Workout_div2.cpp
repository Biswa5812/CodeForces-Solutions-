#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    char c = 'c';
    int chest=0,bi=0,back=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(c=='c')
        {
            chest+=a;
            c = 'b';
        }
        else if(c=='b')
        {
            bi+=a;
            c = 'k';
        }
        else if(c=='k')
        {
            back+=a;
            c = 'c';
        }
    }
    if(chest>bi && chest>back)
    {
        cout<<"chest";
    }
    else if(bi>chest && bi>back)
    {
        cout<<"biceps";
    }
    else
    {
        cout<<"back";
    }
}