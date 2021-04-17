#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a;
    cin>>n;
    vector<long long int> m1;
    vector<long long int> m2;
    vector<long long int> m3;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            m1.push_back(i+1);
        }
        else if(a==2)
        {
            m2.push_back(i+1);
        }
        else if(a==3)
        {
            m3.push_back(i+1);
        }    
    }
    long long int low = min({m1.size(),m2.size(),m3.size()});
    int k=0;
    cout<<low<<endl;
    while(low--)
    {
        cout<<m1[k]<<" "<<m2[k]<<" "<<m3[k]<<endl;
        k++;
    }
    
}  