#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		string s,m;
        long long int res;
        string a;
		cin>>s;
		long long int n;
		cin>>n;
		vector<long long int> v;
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<s.size();j++)
			{
                if(s[j]=='9')
                {
                    a.push_back('1');
                    a.push_back('0');
                }
                else
                {
			        s[j]=s[j]+1;
                    a.push_back(s[j]);
                }
			}
            if(i==n-1)
                res = a.size();
            s = a;
            a.clear();
		}
		
		cout<<res%1000000007<<endl;
	}
}