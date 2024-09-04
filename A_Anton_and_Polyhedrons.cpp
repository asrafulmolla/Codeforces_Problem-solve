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
    int n;
    in n;
    int sum = 0;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        in s[i];
        if (s[i] == "Tetrahedron")
            sum += 4;
        if (s[i] == "Cube")
            sum += 6;
        if (s[i] == "Octahedron")
            sum += 8;
        if (s[i] == "Dodecahedron")
            sum += 12;
        if (s[i] == "Icosahedron")
            sum += 20;
    }
    cout << sum;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        asraful();
    }
}