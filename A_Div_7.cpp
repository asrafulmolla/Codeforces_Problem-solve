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
    if(n%7==0)
    {
        out n;nl;
    }
    else
    {
        int m=n%7;
        int p=7-m;
        if((n%10)+p<10) 
        {
            out n+p;nl;
        }
        else 
        {
            out n-p;nl;
        }
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