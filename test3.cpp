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
    ll int n;
    ll cnt = 0;
    ll rem = 0;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        cnt++;
    }
    for (int i = 1; i <= cnt; i++)
    {
        cout << rem;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        asraful();
    }
}