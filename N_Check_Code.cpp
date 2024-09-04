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
    string s;
    cin >> a >> b;

    cin >> s;
    if (s[a] != '-')
    {
        cout << "No";
        return;
    }
    bool flg = false;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            flg = true;
        }
        else
        {
            flg = false;
            cout << "No";
            return;
        }
    }
    for (int i = a + 1; i < s.size(); i++)
    {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            flg = true;
        }
        else
        {
            flg = false;
            cout << "No";
            return;
        }
    }
    if (flg)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
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