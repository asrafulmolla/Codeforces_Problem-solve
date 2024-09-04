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
    int r,p,q;
    int a[205];
    cin>>r>>p;
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int x=p+q;
    for(int i=p;i<x;i++)
    {
        cin>>a[i];
    }
    sort(a,a+x);
    int cnt=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]!=a[i+1])
        {
            cnt++;
        }
    }
    if(cnt==r) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
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