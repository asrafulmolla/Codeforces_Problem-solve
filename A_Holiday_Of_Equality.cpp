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
    int n; in n;
    vector<int>a(n);
    for(int i=0;i<n;i++) in a[i];
    sort(a.begin(),a.end());
    int tk=0;
    for(int i=0;i<n;i++)
    {
        tk+=a[n-1]-a[i];
    }
    out tk;
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}