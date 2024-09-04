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
    double a,b,c;
    cin>>a>>b>>c;
    double mn1=min(a,b);
    double mn2=min(b,c);
    double mx=max({a,b,c});
    if(mn1+mn2>mx)
    {
        cout<<"Valid\n";
        double s=(a+b+c)/2;
        double ans=sqrt(s*((s-a)*(s-b)*(s-c)));
        cout<<fixed<<setprecision(6)<<ans;
    }
    else
    {
        cout<<"Invalid\n";
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