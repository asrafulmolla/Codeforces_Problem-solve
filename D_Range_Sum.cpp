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
    ll a, b;
    cin >> a >> b;
    ll mx = max(a, b);
    ll mn = min(a, b);
    mn--;
    cout << (mx * (mx + 1) / 2) - (mn * (mn + 1) / 2) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        asraful();
    }
}