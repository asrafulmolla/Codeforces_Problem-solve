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
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int team1_mn=min(a[0],a[1]);
    int team1_mx=max(a[0],a[1]);
    int team2_mn=min(a[2],a[3]);
    int team2_mx=max(a[2],a[3]);
    if(team1_mn>team2_mx or team2_mn>team1_mx) no;
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