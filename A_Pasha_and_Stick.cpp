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
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    n = n / 2;
    if (n % 2 != 0)
    {
        cout << (n / 2) << endl;
    }
    else
    {
        cout << (n / 2) - 1 << endl;
    }
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