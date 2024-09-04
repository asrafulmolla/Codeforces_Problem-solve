#include<iostream>
#include<math.h>
//#include<bits/stdc++.h>

#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
int main()
{
    ll int n,k,sum;
    cin>>n>>k;
    l int red,green,blue;
    red=ceil( ( ( 2 * n ) + k - 1 ) / k );
    green=ceil( ( ( 5 * n ) + k - 1 ) / k );
    blue=ceil( ( ( 8 * n ) + k - 1 ) / k );
    sum=red+green+blue;
    cout<<sum<<endl;
}
