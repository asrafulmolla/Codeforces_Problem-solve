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
    int n, m;
    cin >> n >> m;
    if(n<m)
    {
        cout << n;
    }
    else
    {
        cout << n + ((n + m) / 3);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    // cin>>t;
    while(t--)
    {
        asraful();
    }
}