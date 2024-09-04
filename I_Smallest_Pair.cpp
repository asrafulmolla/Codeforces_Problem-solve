#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n*(n-1)/2];
    for(int i=0;i<(n*(n-1)/2);i++)
    {
        b[i]=(a[i]+a[i+1]+(i+2)-(i+1));
    }
    for(int i=0;i<n*(n-1)/2;i++)
    {
        cout<<b[i]<<" ";
    }
    // for(int i=0;i<n*(n-1)/2;i++)
    // {
    //     if(b[0]>b[i])
    //     {
    //         b[0]=b[i];
    //     }
    // }
    // cout<<b[0];
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}