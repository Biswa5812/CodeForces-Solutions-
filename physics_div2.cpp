#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    int c_x = 0, c_y = 0, c_z = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        c_x += x;
        c_y += y;
        c_z += z;
    }
    if(c_x == 0 && c_y == 0 && c_z == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}