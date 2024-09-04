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
    ll n;
    in n;
    int cnt=0;
    int m=cbrt(n);
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(pow(i,3)+pow(j,3)==n)
            {
                cnt=1;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if(cnt==0) no;
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