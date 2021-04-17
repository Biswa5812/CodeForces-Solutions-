    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,a;
            cin>>n;
            map<int,int> v;
            set<int> s;
            for(int i=0;i<n;i++)
            {
                cin>>a;
                v[a]++;
                s.insert(a);
            }
            set<int>::iterator it;
            if(s.size()==1)
            {
                for(it=s.begin();it!=s.end();it++)
                {
                    cout<<*it<<" ";
                }
                cout<<endl;
            }
            else
            {
                for(it=s.begin();it!=s.end();it++)
                {
                    cout<<*it<<" ";
                }
                for(auto x:v)
                {
                    if(x.second>1)
                    {
                        for(int j=0;j<x.second-1;j++)
                        {
                            cout<<x.first<<" ";
                        }
                    }
                }
                cout<<endl;
            }
        }
    }