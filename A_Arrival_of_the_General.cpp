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
    in n;
    int a[n];
    int mx = INT_MIN;
    int mn = INT_MAX;
    int mxindex = 0;
    int mnindex = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            mxindex = i;
        }
        if (a[i] <= mn)
        {
            mn = a[i];
            mnindex = i;
        }
    }
    if (mxindex > mnindex)
    {
        mnindex += 1;
    }
    cout << mxindex + (n - 1) - mnindex;
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