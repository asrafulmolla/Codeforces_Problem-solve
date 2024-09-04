#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b-c==d || a-b+c==d || a*b+c==d || a+b*c==d || a*b-c==d || a-b*c==d) cout<<"YES";
    else cout<<"NO";
}

int main()
{
    asraful();
}