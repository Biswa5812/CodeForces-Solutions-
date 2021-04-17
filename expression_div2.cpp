#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    int m = -1;
    m = max({x+y*z,x*(y+z),x*y*z,(x+y)*z,x+y+z});
    cout<<m;

}