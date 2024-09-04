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
    int a,b,n; in a>>b>>n;
    int cnt=0;
    for(int i=n;i>=0;i--)
    {
        if(i%a==b)
        {
            cnt=i;
            break;
        }
    }
    out cnt;nl;
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