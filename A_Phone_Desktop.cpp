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
    int a, b;
    in a >> b;
    int cnt = 0;
    cnt += b / 2;
    ll z = b / 2;
    ll i = z;
    while (i > 0)
    {
        a -= 7;
        i--;
    }
    a = max(0, a);
    if(b%2==1)
    {
        a-=11;
        cnt++;
    }
    a=max(0,a);
    cnt += a / 15;
    a -= 15 * (a / 15);
    if (a > 0)
    {
        cout << cnt + 1 << endl;
    }
    else
    {
        cout << cnt << endl;
    }
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