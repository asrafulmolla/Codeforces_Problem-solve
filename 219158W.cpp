#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int a,b,d;
    char c,e;
    cin>>a>>c>>b>>e>>d;
    if(c=='+')
    {
        if(a+b==d) cout<<"Yes";
        else cout<<a+b;
    }
    else if(c=='-')
    {
        if(a-b==d) cout<<"Yes";
        else cout<<a-b;
    }
    else if(c=='*')
    {
        if(a*b==d) cout<<"Yes";
        else cout<<a*b;
    }
}

int main()
{
    asraful();
}