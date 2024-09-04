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

int asraful()
{
    int n, m;
    int cnt = 0;
    int ans = 0;
    cin >> n >> m;
    ans = m / (n - 1);
    if ((m + ans) % n == 0)
    {
        cout << m + ans - 1 << endl;
        return 0;
    }
    cout << m + ans << endl;
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