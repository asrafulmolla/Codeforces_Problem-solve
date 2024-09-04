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
    int a, b, n;
    in a >> b >> n;
    int k = (n - b) / a;
    int cnt = k * a + b;
    if (cnt >= a)
    {
        out cnt;
        nl;
    }
    else
    {
        out 0;
        nl; // Return -1 or some indication that no valid i exists
    }
}

int main()
{
    int t = 1;
    in t;
    while (t--)
    {
        asraful();
    }
}
