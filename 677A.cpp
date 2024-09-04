#include<iostream>
//#include<math.h>
//#include<bits/stdc++.h>

//#define l               long
//#define ll              long long
//#define ull             unsigned long long
//#define pb              push_sback
//#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
using namespace std;
//uns;
int main()
{
    int n,b,i;
    int sum=0;
    cin>>n>>b;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if(b<a[i])
        {
            sum=sum+2;
        }
        else
        {
            sum=sum+1;
        }
    }
    cout<<sum;
}
