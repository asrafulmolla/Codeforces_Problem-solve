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
    string s, a, b;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o')
        {
            a += s[i];
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (s[i] == 'h' || s[i] == 'e' || s[i] == 'o')
        {
            if (a[i + 1] != a[i])
            {
                b += a[i];
            }
        }
        else if(a[i]=='l')
        {
            b+=a[i];
        }
    }
    if(b[0]=='h' && b[1]=='e' && b[2]=='l' && b[3]=='l' && b[b.size()-1]=='o') yes;
    else no;
    // cout << b << endl;
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