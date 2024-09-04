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
    int n,m;
    cin>>n>>m;
    int a[n];
    int odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            odd++;
        }
        else
        {
            continue;
        }
    }
    if(odd%2!=0) 
    {
        cout<<"Yes\n";
    }
    else 
    {
        cout<<"No\n";
    }
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