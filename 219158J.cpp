#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        if(a%b==0) cout<<"Multiples";
        else cout<<"No Multiples";
    }
    else 
    {
        if(b%a==0) cout<<"Multiples";
        else cout<<"No Multiples";
    }
    
}

int main()
{
    asraful();
}