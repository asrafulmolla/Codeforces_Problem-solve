#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=c && b<=d &&c<=b) cout<<c<<" "<<b;
    else if(a>=c && b>=d && a<=d) cout<<a<<" "<<d;
    else if(a==c && b==d) cout<<a<<" "<<b;
    else if(a<c && b>d && a<d && c<b) cout<<c<<" "<<d;
    else if(c<a && d>b && c<b && d>a) cout<<a<<" "<<b;
    else cout<<-1;
}

int main()
{
    asraful();
}