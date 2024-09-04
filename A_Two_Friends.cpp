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
    ll n, ans = 3;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i <= n; i++) in a[i];
    for (int i = 1; i < n; i++)
    {
        if (a[a[i]] == i)
            ans = 2;
    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        asraful();
    }
}