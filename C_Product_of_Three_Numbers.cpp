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
    int n, cnt = 0, a = 0, b = 0, c = 0;
    in n;
    int div = n / 3;
    for (int i = 2; i <= div; i++)
    {
        for (int j = i+1; j <= div; j++)
        {
            for (int k = j+1; k <= div; k++)
            {
                if (i * j * k == n)
                {
                    a = i;
                    b = j;
                    c = k;
                    cnt = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    if (cnt == 0)
        no;
    else
    {
        yes;
        cout << a << " " << b << " " << c << endl;
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