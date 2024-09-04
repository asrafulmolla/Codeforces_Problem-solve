#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll n,cnt=0;
    cin>>n;
    for(ll i=2;i<=n/2;i++)
    {
        if(n%i==0) cnt++;
    }
    if(cnt==0) cout<<"YES";
    else cout<<"NO";
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