#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{

    ll a, b, c = 0, d, ans = 0, ma = 1000000;
    cin >> a >> b;
    d = a;
    if (b == 1)
        b++, c++;
    while (c < 40)
    {
        ans = c;
        while (a != 0)
        {
            a = a / b;
            ans++;
        }
        ma = min(ma, ans);
        c++;
        a = d;
        b++;
    }
    cout << ma << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        asraful();
    }
}