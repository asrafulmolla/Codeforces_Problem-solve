#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    signed long long a,b,c,d;
    cin>>a>>b>>c>>d;
    signed long long  e= a*b*c*d;
    int f=((a%100)*(b%100)*(c%100)*(d%100))%100;
    if(f>=0 && f<=9) cout<<"0"<<f;
    else cout<<f;
}

int main()
{
    asraful();
}