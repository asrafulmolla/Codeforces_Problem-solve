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
    int m=n;
    int digit=0;
    while(n>0)
    {
        int rem=n%10;
        n/=10;
        digit++;
    }
    int result=m-pow(10,(digit-1));
    out result;nl;
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