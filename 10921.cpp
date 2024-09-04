
#include<iostream>
//#include<bits/stdc++.h>
/*

#define ll              long long
#define ull             unsigned long long
#define pb              push_back*/
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
int main()
{int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        char a[] = {"abcdefghijklmnopqrstuvwxyz"};
        int j = 0;
        for(int i=0; i<n; i++){
            cout<<a[j++];
            if(j == k){
                j = 0;
            }
        }cout<<endl;
    }
}
