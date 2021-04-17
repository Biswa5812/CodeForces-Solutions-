#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x1,y1,x2,y2;
        char c;
        int k=0;
        vector<vector<char>> v;
        for(int i=0;i<n;i++)
        {
            vector<char> f;
            for(int j=0;j<n;j++)
            {
                cin>>c;
                if(c=='*')
                {
                    if(k==0)
                    {
                        x1 = i;
                        y1 = j;
                        k=1;
                    }
                    else
                    {
                        x2 = i;
                        y2 = j;
                    } 
                }
                f.push_back(c);
            }
            v.push_back(f);
        }
        if(x1==x2)   
        {
            v[x1+1][y1] = '*';
            v[x2+1][y2] = '*';
        }
        else if(y1==y2)
        {
            v[x1][y1+1] = '*';
            v[x2][y2+1] = '*';
        }
        else if(x1==y2 && y1==x2)
        {
            v[x1][y2] = '*';
            v[x2][y1] = '*';
        }
        else
        {
            v[x1][y2] = '*';
            v[x2][y1] = '*';
        }
        // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                cout<<v[i][j];
                
            }
            cout<<endl;
        }
    }
}