#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+') cout<<a+b;
    else if(c=='-') cout<<a-b;
    else if(c=='*') cout<<a*b;
    else cout<<a/b;
}

int main()
{
    asraful();
}