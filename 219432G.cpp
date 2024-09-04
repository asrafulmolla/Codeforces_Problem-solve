#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll n,fac=1;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        fac*=i;
    }
    cout<<fac<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        asraful();
    }
    
}