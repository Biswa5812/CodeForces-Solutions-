#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, c, t;
    cin >> n >> v;
    vector<int> s;

    for (int i = 1; i <= n; i++)
    {
        bool d = false;
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            cin >> t;
            if (!d and v > t)
            {
                s.push_back(i);
                d = true;
            }
        }
    }

    cout << s.size() << endl;

    for (auto& seller : s)
        cout << seller << " ";
}