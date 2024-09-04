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
    int n, c = 0, d = -1, sum = 0, sum1 = 0;
    cin >> n;
    int a[n];
    int b = n / 2;
    if (b % 2 != 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < b; i++)
        {
            c = c + 2;
            sum += c;
            cout << c << " ";
        }
        for (int i = 0; i < b; i++)
        {
            if (i == b - 1)
            {
                cout << sum - sum1 << " ";
            }
            else
            {
                d = d + 2;
                sum1 += d;
                cout << d << " ";
            }
        }
        cout << endl;
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