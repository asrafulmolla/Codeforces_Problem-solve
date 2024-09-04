//#include<iostream>
//#include<math.h>
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                count++;
                i=i+k-1;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
