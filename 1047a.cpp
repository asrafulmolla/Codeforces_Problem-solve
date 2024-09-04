//#include<bits/stdc++.h>
#include<iostream>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE Dhaka International University; Bangladesh
uns;
int main()
{
    ll n,a,b,c;
    cin>>n;
    if( (n - 2) % 3 == 0)
        {
            a = 1,b = 2,c = (n - 3);
        }
    else
        {
            a = 1,b = 1,c = (n - 2);
        }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
