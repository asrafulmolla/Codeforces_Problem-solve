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
    ll a, b, c, d = 0;
    cin >> a >> b >> c;
    if (a % 2)
        d++;
    if (b % 2)
        d++;
    if (c % 2)
        d++;
    if (d % 2)
        cout << "-1" << endl;
    else
    {
        ll ans = a + b;
        if (ans > c)
            cout << (ans + c) / 2 << endl;
        else
            cout << ans << endl;
    }
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        asraful();
    }
}
