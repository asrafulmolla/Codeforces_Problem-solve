#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='>')
    {
        if(a>b) cout<<"Right";
        else cout<<"Wrong";
    }
    else if(c=='<')
    {
        if(a<b) cout<<"Right";
        else cout<<"Wrong";
    }
    else if(c=='=')
    {
        if(a==b) cout<<"Right";
        else cout<<"Wrong";
    }
}

int main()
{
    asraful();
}