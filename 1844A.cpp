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
int main() {
    int t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >>n>>k;
        ll a = 2;
        ll b = k;
        while (b!=0) {
            ll temp = b;
            b = a % b;
            a = temp;
        }
        if (n % a == 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}


