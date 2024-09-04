#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;

int main()
{
    ll a,b,c,ans = 0;
    cin>>a>>b>>c;
    ans += min(a,b);
    ans *= 2;
    ll Min = min(a,b);
    if(a > Min){
        ans++;
    }
    else if(b > Min){
        ans++;
    }
    ans += c * 2;
    cout<<ans<<endl;


    return 0;
}
