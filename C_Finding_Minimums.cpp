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
    double n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int len = ceil(n / k);
    // cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
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