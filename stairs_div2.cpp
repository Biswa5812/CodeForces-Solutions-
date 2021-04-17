#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    int c = 0;
    if(m>n)
    {
        cout<<-1;
    }
    else
    {
        if(n%2==0)
        {
            c = n/2;
        }
        else
        {
            c = (n/2) + 1;
        }
        while(c%m!=0)
        {
            c+=1;
        }
        cout<<c;
    }
}