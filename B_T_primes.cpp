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

bool isprime(ll num)
{
    if (num == 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll ts;
    cin >> ts;
    while (ts--)
    {
        ll n;
        cin >> n;
        ll k = sqrt(n);
        if (k * k != n)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            if (isprime(k))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
