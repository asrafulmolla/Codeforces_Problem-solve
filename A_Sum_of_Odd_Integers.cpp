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
    ll n,k;
    in n>>k;
    if(n%2 !=k%2 || k*k>n) no;
    else yes;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}