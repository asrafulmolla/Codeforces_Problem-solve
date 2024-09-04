#include <bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if (min({n, m, k}) == n || min({n, m, k}) == k)
    {
        cout << min({n, m, k});
    }
    else if (min({n, m, k}) == m && max({n, m, k}) == n)
    {
        cout << m + n/2;
    }
    else if (min({n, m, k}) == m && max({n, m, k}) == k)
    {
        cout << m+n/2;
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        asraful();
    }
}
