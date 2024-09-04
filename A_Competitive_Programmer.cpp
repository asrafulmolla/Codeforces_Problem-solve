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

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt0 = 0;
        bool cnt1 = false;
        bool cnt2 = false;
        bool cnt3 = false;
        bool cnt4 = false;
        bool cnt6 = false;
        bool cnt8 = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
            if (s[i] == '1')
            {
                cnt1 = true;
            }
            if (s[i] == '2')
            {
                cnt2 = true;
            }
            if (s[i] == '3')
            {
                cnt3 = true;
            }
            if (s[i] == '4')
            {
                cnt4 = true;
            }
            if (s[i] == '6')
            {
                cnt6 = true;
            }
            if (s[i] == '8')
            {
                cnt8 = true;
            }
        }
        if (cnt0 != 0)
        {
            if (cnt6)
                cout << "red\n";
            else if (cnt1 && cnt8)
                cout << "red\n";
            else if (cnt2 && cnt4)
                cout << "red\n";
            else if (cnt3 && cnt0 >= 2)
                cout << "red\n";
            else if (cnt3 && cnt6)
                cout << "red\n";
            else if (cnt0 == s.size())
                cout << "red\n";
            else
                cout << "cyan\n";
        }
        else
            cout << "cyan\n";
    }
}