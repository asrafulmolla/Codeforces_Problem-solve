#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n*2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=b[i];
    }
    int k=n;
    for(int i=0;i<n;i++,k++)
    {
        c[k]=a[i];
    }
    for(int i=0;i<n*2;i++)
    {
        cout<<c[i]<<" ";
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