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
    double a, k, n;
    cin >> n >> k >> a;
    double res = (n * k) / a;
    double ch = floor(res);
    double one = 4 - 5;
    ll low = one * 2147483648;
    if (res != ch)
        cout << "double";
    else if (low <= res && res <= 2147483647)
        cout << "int";
    else if (res > 2147483647)
        cout << "long long";
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