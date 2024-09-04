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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(b<a*m)
    {
        int t = (n % m) * a;
        if(b<t)
        {
            cout << n / m*b+b;
        }
        else
        {
            cout << n / m*b+t;
        }
    }
    else
        cout << n * a;
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