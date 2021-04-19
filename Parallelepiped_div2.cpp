#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s1,s2,s3;
    cin>>s1>>s2>>s3;
    long long int a,b,c;
    a = sqrt(s1*s2/s3);
    b = sqrt(s1*s3/s2);
    c = sqrt(s3*s2/s1);
    cout<<4*(a+b+c);
}