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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    bool cmd = true;
    while (cmd)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                continue;
            }
            else
            {
                cmd = false;
                break;
            }
        }
        
        if (cmd)
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = a[i] / 2;
            }
        }
        cnt++;
    }
    cout << cnt-1 << endl;
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