#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=n-m;i--)
    {
        sum+=a[i];
    }
    cout<<sum;
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