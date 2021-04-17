#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n;
        int up1 = 0, d1 = 0;
        int up2 = 0, d2 = 0;
        // string c;
        for(int i=0;i<n;i++)
        {
            cin>>r;
            if(r==1)
            {
                up1++;
            }
            
            (r==3) ? up2++ : d1++;
        }    
        
        if(r == 0)
        	cout<<up2<<"\n";
        else 
        	cout<<up1 + up2<<"\n";
    }
}