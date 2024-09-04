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
    int n,m;
    in n>>m;
    int a=240-m;
    int cnt=0;
    int k=1;
    while(a>=k*5)
    {
        int num=a-5*k;
        a=num;
        k++;
        cnt++;
        if(n==cnt) break;
    }
    out cnt;
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