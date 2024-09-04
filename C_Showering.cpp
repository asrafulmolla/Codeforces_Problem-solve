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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i];
    }
    bool flg = false;
    if (v1[0] >= a)
    {
        flg = true;
    }
    for (int i = 1; i < n && !flg; i++)
    {
        if (v1[i] - v2[i - 1] >= a)
        {
            flg = true;
        }
    }
    if (b - v2[n - 1] >= a)
    {
        flg = true;
    }
    if (flg)
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