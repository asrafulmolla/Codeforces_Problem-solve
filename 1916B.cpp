#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        ll k=((ll)a*b)/__gcd(a,b);
        if(k==b) cout<<k*(b/a)<<endl;
        else cout<<k<<endl;
    }

}

