#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
int main()
{

    ll n,m,k,t,i,a,b,c;
    cin>>a>>b;
    if(b>a)a=b;
    b=7-a;
    if(b==2)cout<<("1/3");
    else if(b==4)cout<<("2/3");
    else if(b==3)cout<<("1/2");
    else if(b==6)cout<<("1/1");
    else if(b==1) cout<<("1/6");
    else cout<<("5/6");
}
