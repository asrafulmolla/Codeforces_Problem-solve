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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R' && s[i - 1] == 'L')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    bool flg = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
        }
        if (flg)
        {
            cout << s[i];
            cout << endl;
            getchar();
            cout << s[i];
            flg = false;
        }
        else
            cout << s[i];
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