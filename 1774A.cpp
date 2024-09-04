#include<iostream>
#include <string>
//#include<math.h>
#include<bits/stdc++.h>

#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU),Dhaka, Bangladesh;
//using namespace std;
uns;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p="+";
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1')
        {
            if(p=="+") p="-";
            else p="+";
        }
        cout<<p;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}
