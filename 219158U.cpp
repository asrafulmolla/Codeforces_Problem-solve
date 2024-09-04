#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    float n;
    cin>>n;
    int m=n;
    if(m==n) cout<<"int "<<m;
    else cout<<"float "<<m<<" "<<setprecision(3)<<n-m;
}

int main()
{
    asraful();
}