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
    for(int i=0;i<n;i++) in a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1) no;
    else yes;
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