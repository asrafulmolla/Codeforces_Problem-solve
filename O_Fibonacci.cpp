// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    ll fibo=0;
    ll a=0,b=1;
    //cout<<a<<" "<<b<<" ";
    for(ll i=2;i<n;i++)
    {
        fibo=a+b;
        //cout<<fibo<<" ";
        a=b;
        b=fibo;
    }
    if(n==2) cout<<"1";
    else cout<<fibo;
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