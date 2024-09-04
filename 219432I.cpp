#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,m=0,rem,org;
    cin>>n;
    org=n;
    while(n!=0)
    {
        rem=n%10;
        m=m*10+rem;
        n/=10;
    }
    if(m==org) 
        cout<<m<<endl<<"YES";
    else 
    {
        cout<<m<<endl<<"NO";
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