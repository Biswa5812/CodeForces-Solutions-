#include<bits/stdc++.h>
using namespace std;
// long long int power(long long int i, long long int j)
// {
//     long long int res = 1;
//     while(j)
//     {
//         if(j%2==1)
//         {
//             res = (res*i)%1000000007;
//         }
//         i = (i * i)%1000000007;
//         j = j/2;
//     }
//     return res;
// }
int main()
{
    long long int k,d;
    cin>>k>>d;
    if(d==0)
    {
        if(k==1)
        {
            cout<<0;
        }
        else
        {
            cout<<"No solution";
        }
    }
    if(d>0)
    {
        cout<<d;
        for(long long int i=0;i<k-1;i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
}   