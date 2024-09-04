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
    int n; in n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        in a[i];
        sum+=a[i];
    }
    if(sum%4==0) out sum/4;
    else out (sum/4)+1;
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