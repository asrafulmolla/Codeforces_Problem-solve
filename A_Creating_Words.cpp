#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    string s1, s2;
    cin >> s1 >> s2;
    char c1 = s1[0];
    char c2 = s2[0];
    s1[0] = c2;
    s2[0] = c1;
    cout << s1 << " " << s2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}