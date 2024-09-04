#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define in cin >>
#define out cout <<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v(n + 1, -1);
    v[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i >= a && v[i - a] != -1)
        {
            v[i] = max(v[i], v[i - a] + 1);
        }
        if (i >= b && v[i - b] != -1)
        {
            v[i] = max(v[i], v[i - b] + 1);
        }
        if (i >= c && v[i - c] != -1)
        {
            v[i] = max(v[i], v[i - c] + 1);
        }
    }
    cout << v[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        asraful();
    }
}