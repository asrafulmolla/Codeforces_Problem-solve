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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    bool flg=false;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]-a[i+1]==-1 or a[i]-a[i+1]==0)
        {
            continue;
        }
        else
        {
            flg=true;
            break;
        }
    }
    if(flg) no;
    else yes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}