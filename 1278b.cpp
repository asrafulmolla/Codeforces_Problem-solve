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
    ll int t,a,b,d,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        d=abs(a-b);
        sum=0;
        for(long long int i=0;  i<100000; i++)
        {
            sum+=i;
            if(sum>=d && (sum-d)%2==0)
            {
               cout<<i<<endl;
               break;
            }
        }
    }
    return 0;
}
