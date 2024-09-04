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
    int i = 0;
    int j = s.size() - 1;
    while (j > i)
    {
        if (s[i] == '?' && s[i] != s[j])
        {
            char c = s[j];
            s[i] = c;
        }
        else if (s[j] == '?' && s[i] != s[j])
        {
            char c = s[i];
            s[j] = c;
        }
        else if (s[i] == '?' && s[j] == '?')
        {
            // cout << -1;
            // return;
            s[i] = 'a';
            s[j] = 'a';
        }
        i++;
        j--;
    }
    if (s[(s.size() / 2) ] == '?')
    {
        // s[(s.size() / 2)] = 'a';
        // s[(s.size() / 2)] = 'a';
        cout << -1;
        return;
    }
    cout << s;
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