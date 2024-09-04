#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    ll r,b;
    while(cin>>r>>b)
    {
        ll p,pp;
        p=max(r,b);pp=min(r,b);
    cout<<p-1<<" "<<p-(p-pp)<<endl;
    }
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