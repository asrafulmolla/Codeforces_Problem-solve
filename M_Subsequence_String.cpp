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
    string s, x = "hello";
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x[j])
            j++;
    }
    if (j == 5)
        yes;
    else
    {
        no;
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