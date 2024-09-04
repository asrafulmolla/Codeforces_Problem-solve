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
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << abs(v[n - 1] - v[n]) << endl;
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