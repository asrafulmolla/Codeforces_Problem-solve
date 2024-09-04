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
    ll n, k, c = 1, ans;
    cin >> n >> k;
    ans = n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            c++;
        else
        {
            if (c >= k)
                ans = min(ans, k - 1);
            c = 1;
        }
    }
    if (c >= k)
        ans = min(ans, k - 1);
    cout << ans << endl;
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