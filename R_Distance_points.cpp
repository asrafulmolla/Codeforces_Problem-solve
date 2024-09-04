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
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double x=pow(x1-x2,2);
    double y=pow(y1-y2,2);
    cout<<fixed<<setprecision(9)<<sqrt(x+y);
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