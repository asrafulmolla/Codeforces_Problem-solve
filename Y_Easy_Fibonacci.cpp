// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        asraful();
    }
}