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
    ll n;
    cin>>n;
    ll cnt=0;
    ll sum=0;
    for(int i=0;i<n/2;i++)
    {
        sum+=i;
        if(sum<=n)
        {
            cnt=i;
        }
        if(sum>n) break;
    }
    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}