#include<iostream>
//#include<math.h>
//#include<bits/stdc++.h>

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
    int t,a,b,mod;
    cin>>t;
    while(t--)
    {
        ll n,ans = 0;
        cin>>n>>a>>b;
        if(a * 2 < b)
            {
                ans = n * a;
            }
        else
            {
                mod = n % 2;
                ans = (n / 2) * b + (mod * a);
            }
        cout<<ans<<endl;
    }
    return 0;
}
