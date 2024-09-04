#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll n,sum=0;
    cin>>n;
    for(ll i=1;i<=n;)
    {
        sum+=n;
        n/=2;
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}