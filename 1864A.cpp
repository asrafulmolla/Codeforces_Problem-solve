#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll x,y,n,cnt=1;
    cin>>x>>y>>n;
    vector<ll>a(n);
    a[n-1]=y;
    a[0]=x;
    for(ll i=n-2;i>=1;i--)
    {
        a[i]=a[i+1]-cnt;
        cnt++;
    }
    if((a[1]-a[0])>(a[2]-a[1]))
    {
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else 
    {
        cout<<-1;
    }
    cout<<endl;
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