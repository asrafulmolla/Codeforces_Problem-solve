#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    ll n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            cnt++;
        }
    }
    if(cnt%2!=0) yes;
    else no;
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