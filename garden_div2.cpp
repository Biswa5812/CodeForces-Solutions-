#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
    {
        cout<<-1;
    }
    else if(x1==x2)
    {
        x3 = x1 + abs(y1-y2);
        x4 = x2 + abs(y1-y2);
        y3 = y1;
        y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(y1==y2)
    {
        x3 = x1;
        y3 = y1 + abs(x1 - x2);
        x4 = x2;
        y4 = y2 + abs(x1-x2);
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
}