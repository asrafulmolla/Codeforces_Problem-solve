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
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int n;
    cin >> n;
    sort(a.begin(), a.end());
    int x = a[2] - a[1];
    int y = a[2] - a[0];
    int rem = n - (x + y);
    if (rem % 3 == 0 && rem >= 0)
        yes;
    else
        no;
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