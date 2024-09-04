// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    m %= n;
    for (int i = n - m; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < n - m; i++)
    {
        cout << a[i] << " ";
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