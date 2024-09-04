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
    string a,b;
    cin >>a>>b;
    //char c1,c2;
    int x=0,y=0;
    int n=a.size();
    int m=b.size();
    if(a[n-1]==b[m-1])
    {
        if(n>m)
        {
            if(a[n-1]=='S')
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
        else if(n<m)
        {
            if(a[n-1]=='S')
            {
                cout<<">"<<endl;
            }
            else cout<<"<"<<endl;
        }
        else cout<<"="<<endl;
    }
    else 
    {
        int A=a[n-1]=='S' ? 1: a[n-1]== 'M' ? 2:3;
        int B=b[m-1]=='S' ? 1: b[m-1]=='M' ? 2:3;
        if(A>B) cout<<">"<<endl;
        else if (A<B) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }

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
