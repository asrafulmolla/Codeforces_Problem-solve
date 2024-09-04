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
    float n, m, k;
    cin >> n >> m >> k;
    if (n / m == ceil(n / m))
    {
        if (k + (n / m) >= n)
        {
            no;
        }
        else
            yes;
    }
    else
    {
        if (k + (n / m)+1 >= n)
        {
            no;
        }
        else
            yes;
    }
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