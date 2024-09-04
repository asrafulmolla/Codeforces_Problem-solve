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
    string a;
    string b;
    string c;
    cin >> a;
    int cnt = 0;
    if (a.size() % 2 != 0)
    {
        cnt = 1;
    }
    else
    {
        int j=a.size() / 2;
        for (int i =0; i < a.size()/2; i++,j++)
        {
            if (a[i] != a[j])
            {
                cnt = 1;
                break;
            }
        }
    }
    if (cnt == 0)
        yes;
    else
        no;
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