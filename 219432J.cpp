#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll n,cnt=0,j;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n/2;j++)
            if(i%j==0) continue;
            else 
                cout<<i<<" ";
                j=1;
    }
    
    //if(cnt==0) cout<<"YES";
    //else cout<<"NO";
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