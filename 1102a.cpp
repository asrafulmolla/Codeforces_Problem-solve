#include<iostream>
//#include<math.h>
//#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
int main()
{
    ll n;
    cin>>n;
    n %= 4;
    if(n == 0 || n == 3)
        {
            cout<<0<<endl;
        }
    else
        {
            cout<<1<<endl;
        }

    return 0;
}

