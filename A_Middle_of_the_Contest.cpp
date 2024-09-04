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
    int h1, h2, m1, m2;
    char c;
    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;
    int total_min1 = h1 * 60 + m1;
    int total_min2 = h2 * 60 + m2;
    int mid = (total_min1 + total_min2) / 2;
    int hr = mid / 60;
    int mn = mid % 60;
    if (hr > 9 && mn > 9)
        cout << hr << ":" << mn << endl;
    else
    {
        if (hr < 10)
            cout << 0;
        cout << hr << ":";
        if (mn < 10)
            cout << 0;
        cout << mn << endl;
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