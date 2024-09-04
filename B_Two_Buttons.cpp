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
    int a,b; in a>>b;
    if(a>b) out a-b;
    else
    {
        int i;
        for(int i=a;i<=b;i++)
        {
            a*=2;
        }
        if(a==b) out i-1;
        else{
            a=a*2;
            cout<<abs(a-b)+(i-1);
        }
    }
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